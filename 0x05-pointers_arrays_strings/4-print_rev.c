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
char temp;
len = _strlen(s);
for (i = 0; i < len / 2; i++)
{
temp = *s;
*s = *(s + len -i -1);
*(s + len -i -1) = temp;
}
_puts(s);
}
