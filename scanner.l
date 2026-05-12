%{
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

#include "values.h"
#include "listing.h"
#include "tokens.h"
#include "hex.h"
#include "charlit.h"
#include <cstdlib>

%}

%option noyywrap

ws		[ \t\r]+
comment         ("//"|"--").*\n
line		[\n]
id		[A-Za-z]([A-Za-z0-9])*
digit		[0-9]
dec		{digit}+
char		'.'
punc		[\(\),:;]
%%

{ws}		{ ECHO; }
{comment}	{ ECHO; nextLine(); }
{line}		{ ECHO; nextLine(); }
"+"		{ ECHO; yylval.oper = ADD; return(ADDOP); }
"*"		{ ECHO; yylval.oper = MULTIPLY; return(MULOP); }
"&"		{ ECHO; yylval.oper = AND; return(ANDOP); }
"<"		{ ECHO; yylval.oper = LT; return(RELOP); }
"=>"		{ ECHO; return(ARROW); }
begin		{ ECHO; return(BEGIN_); }
case		{ ECHO; return(CASE); }
character	{ ECHO; return(CHARACTER); }
end		{ ECHO; return(END); }
endswitch	{ ECHO; return(ENDSWITCH); }
function	{ ECHO; return(FUNCTION); }
integer		{ ECHO; return(INTEGER); }
is		{ ECHO; return(IS); }
list		{ ECHO; return(LIST); }
of		{ ECHO; return(OF); }
others		{ ECHO; return(OTHERS); }
returns		{ ECHO; return(RETURNS); }
switch		{ ECHO; return(SWITCH); }
when		{ ECHO; return(WHEN); }
real            { ECHO; return(REAL); }

if        { ECHO; return(IF); }
then      { ECHO; return(THEN); }
elsif     { ECHO; return(ELSIF); }
else      { ECHO; return(ELSE); }
endif     { ECHO; return(ENDIF); }
fold      { ECHO; return(FOLD); }
left      { ECHO; return(LEFT); }
right     { ECHO; return(RIGHT); }
endfold   { ECHO; return(ENDFOLD); }

"|"   { ECHO; yylval.oper = OR;  return(OROP); }
"!"   { ECHO; yylval.oper = NOT; return(NOTOP); }
"-"   { ECHO; yylval.oper = SUB; return(ADDOP); }
"/"   { ECHO; yylval.oper = DIV; return(MULOP); }
"%"   { ECHO; yylval.oper = REM; return(REMOP); }
"^"   { ECHO; yylval.oper = EXP; return(EXPOP); }
"~"   { ECHO; yylval.oper = NEG; return(NEGOP); }

"="   { ECHO; yylval.oper = EQ;  return(RELOP); }
"/="  { ECHO; yylval.oper = NEQ; return(RELOP); }
"<>"  { ECHO; yylval.oper = NEQ; return(RELOP); }
">"   { ECHO; yylval.oper = GT;  return(RELOP); }
">="  { ECHO; yylval.oper = GE;  return(RELOP); }
"<="  { ECHO; yylval.oper = LE;  return(RELOP); }
with  { ECHO; return(WITH); }


{id}		{ ECHO; yylval.iden = (CharPtr)malloc(yyleng + 1); 
			strcpy(yylval.iden, yytext); return(IDENTIFIER);}

([0-9]*\.[0-9]+|[0-9]+\.[0-9]*)([eE][+-]?[0-9]+)?  {
    ECHO;
    yylval.value = atof(yytext);
    return REAL_LITERAL;
}

#[0-9a-fA-F]+    {
    ECHO;
    std::string s(yytext + 1);   // strip '#'
    yylval.value = hexToInt(s);
    return INT_LITERAL;
}

\'(\\.|[^\\'])\' {
    ECHO;
    std::string token(yytext + 1, yyleng - 2); // strip outer quotes
    yylval.value = charLiteralToInt(token);
    return CHAR_LITERAL;
}

{dec}   {
    ECHO;
    yylval.value = atoi(yytext);
    return INT_LITERAL;
}




{punc}		{ ECHO; return(yytext[0]); }
.		{ ECHO; appendError(LEXICAL, yytext); }
%%

