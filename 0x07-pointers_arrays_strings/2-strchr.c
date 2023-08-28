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
unsigned int i = 0;
int found = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
s = s + i;
found = 1;
break;
}
i++;
}
if (found == 0)
s = 0;
return (s);
}
