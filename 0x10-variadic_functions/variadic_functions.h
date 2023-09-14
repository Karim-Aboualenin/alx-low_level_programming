#ifndef VARDIC_H
#define VARDIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * struct args - Struct op
 *
 * @format: The format needed
 * @f: The function associated
 */
typedef struct args_t
{
char format;
void (*f)(va_list);
} args_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
