#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the accepted bytes
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int num = 0;
int i;
int found = 0;
while (*s != '\0')
{
i = 0;
found = 0;
while (accept[i] != '\0')
{
if (*s == accept[i++])
{
num++;
found = 1;
}
}
if (found == 0)
break;
s++;
}

return (num);
}
