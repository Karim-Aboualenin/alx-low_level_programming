#include "main.h"



/**
 * _strncat - This function appends n characters src string to the dest string
 * @src: src
 * @dest: the destination
 * @n: number of character
 * Return: a pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
int len_dest;
int i, j = 0;

len_dest = _strlen(dest);
for (i = len_dest; i < n + len_dest; i++)
{
dest[i] = src[j];
if (src[j] == '\0')
{
break;
}
j++;
}
if (dest[i - 1] != '\0')
dest[i] = '\0';
return (dest);
}
