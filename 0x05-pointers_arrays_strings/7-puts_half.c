#include "main.h"

/**
 * int _strlen - return the length of string
 * @s: the string
 * Return: the length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: nothing
*/
void puts_half(char *str)
{
int len = 0;
len = _strlen(str);
if (len % 2 == 0)
str = str + (len / 2);
else
str = str + ((len / 2) + 1);
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
