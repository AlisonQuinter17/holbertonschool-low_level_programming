#ifndef VARIADIC_H
#define VARIADIC_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct tokens - struct token.
 *
 * @pm: The parameters entered.
 * @f: The base function.
 */
typedef struct tokens
{
	char *pm;
	int (*f)(char*, va_list);
} tokens_t;


/* Prototypes */
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void op_c(va_list p);

void op_i(va_list p);

void op_f(va_list p);

void op_s(va_list p);

#endif
