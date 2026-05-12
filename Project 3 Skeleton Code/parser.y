%{

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

#include "values.h"
#include "listing.h"
#include "symbols.h"

int mainReturnType = 0;   
double result = NAN;

int yylex();
void yyerror(const char* message);
double extract_element(CharPtr list_name, double subscript);
double switchValue;

Symbols<double> scalars;
Symbols<vector<double>*> lists;

vector<double> parameters;
int paramIndex = 0;

%}

%define parse.error verbose

%union {
	CharPtr iden;
	Operators oper;
	double value;
	vector<double>* list;
}


%left OROP
%left ANDOP
%right NOTOP


%token <iden> IDENTIFIER

%token <value> INT_LITERAL CHAR_LITERAL REAL_LITERAL

%token <oper> ADDOP MULOP ANDOP RELOP REMOP EXPOP NEGOP OROP NOTOP

%token ARROW

%token BEGIN_ CASE CHARACTER ELSE END ENDSWITCH FUNCTION INTEGER IS LIST OF OTHERS
	RETURNS SWITCH WHEN
%token REAL

%token IF THEN ELSIF ENDIF
%token FOLD LEFT RIGHT ENDFOLD
%token WITH

%type <value> body statement_ statement cases case expression term power unary primary
	 condition relation elsif_list else_part variable type

%type <value> function_header

%type <list> list expressions

%%

function:	
	function_header optional_variable  body ';' 
            {
                 mainReturnType = $1;
                 result = $3;
             } 
    ;
	
function_header:
    FUNCTION IDENTIFIER parameters RETURNS type ';'
        { $$ = $5; }
    ;

parameters:
    IDENTIFIER ':' type { 
        if (paramIndex < parameters.size()) {
            scalars.insert($1, parameters[paramIndex++]);
        } else {
            appendError(SYNTAX, "Missing command-line argument for parameter");
        }
    }
  | parameters ',' IDENTIFIER ':' type {
        if (paramIndex < parameters.size()) {
            scalars.insert($3, parameters[paramIndex++]);
        } else {
            appendError(SYNTAX, "Missing command-line argument for parameter");
        }
    }
  | %empty
  ;

type:
	INTEGER  { $$ = 1; } |
	CHARACTER { $$ = 2; } |
        REAL { $$ = 3; }
;
	
optional_variable:
	variable optional_variable |
	%empty ;
	
variable:
      IDENTIFIER ':' type IS expression ';'
        { scalars.insert($1, $5); $$ = $5; }
    | IDENTIFIER ':' LIST OF type IS list ';'
        { lists.insert($1, $7); }
    | IDENTIFIER ':' type IS WHEN condition ',' expression ':' expression ';'
        { scalars.insert($1, $6 ? $8 : $10); $$ = $6 ? $8 : $10; }
    | IDENTIFIER ':' type IS SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH ';'
        { scalars.insert($1, !isnan($8) ? $8 : $11); $$ = !isnan($8) ? $8 : $11; }
    | IDENTIFIER ':' type IS IF condition THEN statement ';' elsif_list else_part ENDIF ';'
        { scalars.insert($1, $6 ? $8 : (!isnan($10) ? $10 : $11)); $$ = $6 ? $8 : (!isnan($10) ? $10 : $11); }
;

list:
	'(' expressions ')' {$$ = $2;} ;

expressions:
	expressions ',' expression {$1->push_back($3); $$ = $1;} | 
	expression {$$ = new vector<double>(); $$->push_back($1);}

body:
	BEGIN_ statement_ END {$$ = $2;} ;

statement_:
	statement ';' |
	error ';' {$$ = 0;} ;
    
statement:
      expression
    | WHEN condition ',' expression ':' expression 
        { $$ = $2 ? $4 : $6; }
    | SWITCH expression IS cases OTHERS ARROW statement ';' ENDSWITCH
        { switchValue = $2;
          $$ = !isnan($4) ? $4 : $7; }
    | IF condition THEN statement ';' elsif_list else_part ENDIF
        { $$ = $2 ? $4 : (!isnan($6) ? $6 : $7); }
    | FOLD LEFT ADDOP list ENDFOLD
        { $$ = evaluateFold(DIR_LEFT, $3, $4); }
    | FOLD RIGHT ADDOP list ENDFOLD
        { $$ = evaluateFold(DIR_RIGHT, $3, $4); }

    | FOLD LEFT ADDOP IDENTIFIER ENDFOLD
        {
            vector<double>* list;
            CharPtr name = $4;
            if (lists.find(name, list)) {
                $$ = evaluateFold(DIR_LEFT, $3, list);
            } else {
                appendError(UNDECLARED, name);
                $$ = NAN;
            }
        }
    | FOLD RIGHT ADDOP IDENTIFIER ENDFOLD
        {
            vector<double>* list;
            CharPtr name = $4;
            if (lists.find(name, list)) {
                $$ = evaluateFold(DIR_RIGHT, $3, list);
            } else {
                appendError(UNDECLARED, name);
                $$ = NAN;
            }
        }
    ;

elsif_list:
    elsif_list ELSIF condition THEN statement ';'
        { $$ = $3 ? $5 : $1; } |
    %empty { $$ = NAN; }
    ;

else_part:
    ELSE statement ';' { $$ = $2; } |
    %empty { $$ = NAN; }
    ;

cases:
	cases case {$$ = !isnan($1) ? $1 : $2;} 
      | case
      | %empty {$$ = NAN;} ;
	
case:
	CASE INT_LITERAL ARROW statement ';' 
        { $$ = (switchValue == $2) ? $4 : NAN;} ; 

condition:
    condition ANDOP relation { $$ = $1 && $3; } |
    condition OROP relation  { $$ = $1 || $3; } |
    NOTOP relation           { $$ = !$2; } |
    relation ;

relation:
	'(' condition ')' {$$ = $2;} |
	expression RELOP expression {$$ = evaluateRelational($1, $2, $3);} ;

expression:
	expression ADDOP term {$$ = evaluateArithmetic($1, $2, $3);} |
	term ;
      
term:
    term MULOP power             { $$ = evaluateArithmetic($1, $2, $3); } |
    term REMOP power             { $$ = evaluateArithmetic($1, $2, $3); } |
    power ;

power:
    unary |
    unary EXPOP power            { $$ = evaluateArithmetic($1, $2, $3); } ;

unary:
	NEGOP unary {$$ = evaluateArithmetic(0, $1, $2);} |
	primary ;

primary:
	'(' expression ')' {$$ = $2;} |
	INT_LITERAL | 
	CHAR_LITERAL |
        REAL_LITERAL |
	IDENTIFIER '(' expression ')' {$$ = extract_element($1, $3); } |
	IDENTIFIER {if (!scalars.find($1, $$)) appendError(UNDECLARED, $1);} ;

%%

void yyerror(const char* message) {
	appendError(SYNTAX, message);
}

double extract_element(CharPtr list_name, double subscript) {
	vector<double>* list; 
	if (lists.find(list_name, list))
		return (*list)[subscript];
	appendError(UNDECLARED, list_name);
	return NAN;
}

int main(int argc, char *argv[]) {
	firstLine();

        for (int i = 1; i < argc; i++) {
            parameters.push_back(atof(argv[i]));
        }
	yyparse();
	if (lastLine() == 0)
                cout << "Compiled Successfully" << endl;
		cout << "Result = " << result << endl;
	return 0;
} 
