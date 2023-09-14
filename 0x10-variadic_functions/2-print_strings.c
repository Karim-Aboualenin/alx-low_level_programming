#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: number of the parameters
 * @n: number of the parameters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *name;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
name = va_arg(args, char *);
if (name == NULL)
printf("(nil)");
else
printf("%s", name);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
