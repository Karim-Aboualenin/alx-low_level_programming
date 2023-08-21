#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: the string
 * Return: nothing
*/
void print_rev(char *s)
{
int len = 0;
int i;
while (*s != '\0')
{
len++;
s++;
}
for (i = 0; i < len; i++)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
