//
// Created by kayla on 1/10/25.
//

#include <cstdio>

#include "io.hpp"

char STR[STRLEN + 1];

const char *read_line() {
    char c, *ptr;
    for (ptr = STR, c = getchar(); c != '\r' && ptr - STR < STRLEN; c = getchar()) putchar(*ptr++ = c);
    *ptr = 0;
    return STR;
}
