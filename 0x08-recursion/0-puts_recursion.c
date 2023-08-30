#include "main.h"
/**
 * _puts_recursion - print string
 * @s: the string
 * Return: nothing
*/
void _puts_recursion(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
