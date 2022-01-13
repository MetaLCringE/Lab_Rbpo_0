#include "Header.h"

int CompareStrings(const char* lhs, const char* rhs) {
    int i = 0;
    do {
        i++;
    } while (lhs[i] && rhs[i] && lhs[i] == rhs[i]);
    return lhs[i] - rhs[i];
}