#include "main.h"

/**
 * _strncpy - copies n character of string to another string
 * @dest: the destination
 * @src: the source
 * @n: number of characters
 * Return: the pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
if (src[i] == '/0')
break;
}
return (dest);
}
