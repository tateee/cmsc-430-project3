// hex.cc
#include "hex.h"
#include <cctype>
#include <stdexcept>

int hexToInt(const std::string& s) {
    long val = 0;
    for (char c : s) {
        int d;
        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'f') d = 10 + (c - 'a');
        else if (c >= 'A' && c <= 'F') d = 10 + (c - 'A');
        else throw std::runtime_error("Invalid hex digit");
        val = (val << 4) + d;
    }
    return static_cast<int>(val);
}
