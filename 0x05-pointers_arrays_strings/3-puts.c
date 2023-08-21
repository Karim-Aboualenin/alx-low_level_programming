#include "main.h"
/**
 * void _puts - print string
 * @str: the string
 * Return: nothing
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
