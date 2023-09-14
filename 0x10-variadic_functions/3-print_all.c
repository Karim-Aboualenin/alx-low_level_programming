#include "variadic_functions.h"
/**
 * print_char -a function that prints char.
 * @args: is the list of parameter
 * Return: nothing
 */
void print_char (va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - a function that prints int.
 * @args: is the list of parameter
 * Return: nothing
 */
void print_int (va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float -a function that prints char.
 * @args: is the list of parameter
 * Return: nothing
 */
void print_float (va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string -a function that prints char.
 * @args: is the list of parameter
 * Return: nothing
 */
void print_string (va_list args)
{
printf("%s", va_arg(args, char *));
}
/**
 * print_all -a function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
int i = 0, j = 0, check = 0;
args_t action[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};
va_list args;
va_start(args, format);
while (format[i++] != 0)
{
j = 0;
check = 0;
while (action[j].format != '\0')
{
if (strcmp(format[i], action[j].format))
{
action[j].f(args);
check = 1
}
}
if (check == 1)
printf (", ");
}
printf("\n");
}