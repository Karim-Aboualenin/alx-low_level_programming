#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the set of bytes
 *
 * Return: pointer to string
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int found = 0;
while (*s != '\0')
{
for(i = 0; accept[i] != '\0'; i++)
{
if (s[0] == accept[i])
{
found = 1;
break;
}
}
if (found == 1)
{
break;
}
s++;
}
if (*s == '\0' && accept[i] == '\0')
{
return (0);
}
else
{
return (s);
}
}
