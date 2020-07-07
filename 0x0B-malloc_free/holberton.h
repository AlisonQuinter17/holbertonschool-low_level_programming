#ifndef HOLBERTON
#define HOLBERTON

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

char *_strcpy(char *dest, char *src);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

#endif
