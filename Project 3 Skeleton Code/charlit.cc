// charlit.cc
#include "charlit.h"
#include <stdexcept>

// token is the inside of the quotes, e.g. "A", "\n", "\\", "\'"
int charLiteralToInt(const std::string& token) {
    if (token.empty()) throw std::runtime_error("Empty char literal");

    if (token[0] != '\\') {
        // Simple character like 'A'
        if (token.size() != 1)
            throw std::runtime_error("Invalid char literal length");
        return static_cast<unsigned char>(token[0]);
    }

    // Escape sequences
    if (token == "\\n")  return '\n';
    if (token == "\\t")  return '\t';
    if (token == "\\f")  return '\f';
    if (token == "\\r")  return '\r';
    if (token == "\\\\") return '\\';
    if (token == "\\\'") return '\'';
    if (token == "\\\"") return '\"';

    throw std::runtime_error("Unknown escape in char literal: " + token);
}
