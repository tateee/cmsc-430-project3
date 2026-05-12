#include <vector>
using std::vector;

#include <string>
#include <cmath>

using namespace std;

#include "values.h"
#include "listing.h"

double evaluateArithmetic(double left, Operators op, double right) {
    switch (op) {
        case ADD:      return left + right;
        case SUB:      return left - right;
        case MULTIPLY: return left * right;
        case DIV:      
            if (right == 0) {
                appendError(DIVIDE_BY_ZERO, "division by zero");
                return NAN;
            }
            return left / right;
        case REM:
            return fmod(left, right);   // remainder for doubles
        case EXP:
            return pow(left, right);
        case NEG:
            return -right;  // unary negation, left is ignored
        default:
            appendError(SYNTAX, "unknown arithmetic operator");
            return NAN;
    }
}

double evaluateRelational(double left, Operators op, double right) {
    switch (op) {
        case EQ:  return left == right;
        case NEQ: return left != right;
        case LT:  return left <  right;
        case LE:  return left <= right;
        case GT:  return left >  right;
        case GE:  return left >= right;
        default:
            appendError(SYNTAX, "unknown relational operator");
            return NAN;
    }
}

double evaluateFold(Direction dir, Operators op, vector<double>* list) {
    if (!list || list->empty()) return NAN;

    double result;

    if (dir == DIR_LEFT) {
        result = (*list)[0];
        for (size_t i = 1; i < list->size(); i++) {
            result = evaluateArithmetic(result, op, (*list)[i]);
        }
    } else { // DIR_RIGHT
        result = (*list)[list->size() - 1];
        for (int i = list->size() - 2; i >= 0; i--) {
            result = evaluateArithmetic((*list)[i], op, result);
        }
    }
    return result;
}
