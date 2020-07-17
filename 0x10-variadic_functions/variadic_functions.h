#ifndef VARIADIC_H
#define VARIADIC_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
