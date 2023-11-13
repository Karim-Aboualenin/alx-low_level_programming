#include "main.h"
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
break;
}
s++;
}
if (*s == '\0' && c != '\0')
{
return (0);
}
else
{
return (s);
}
}
