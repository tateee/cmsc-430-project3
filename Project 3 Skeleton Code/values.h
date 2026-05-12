#include <vector>
using std::vector;

typedef char* CharPtr;

enum Operators {
    ADD, SUB, MULTIPLY, DIV, REM, EXP, NEG,            
    AND, OR, NOT,   
    LT, LE, GT, GE, EQ, NEQ 
};

enum Direction { DIR_LEFT, DIR_RIGHT };

double evaluateArithmetic(double left, Operators operator_, double right);
double evaluateRelational(double left, Operators operator_, double right);
double evaluateFold(Direction dir, Operators op, vector<double>* list);

