#include "main.h"
/**
 * _puts_recursion - print string
 * @s: the string
 * Return: nothing
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
