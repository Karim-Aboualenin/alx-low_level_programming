#include "main.h"

/**
 * _strlen - return the length of string
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
 * _strncat - This function appends n characters src string to the dest string
 * @src: src
 * @dest: the destination
 * @n: number of character
 * Return: a pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
int len_dest, len_src;
int i, j = 0;

len_dest = _strlen(dest);
len_src = _strlen(src);
for (i = len_dest; i <= n + len_dest; i++)
{
dest[i] = src[j];
if (src[j] == '\0')
{
break;
}
j++;
}
if (dest[i-1] != '\0')
dest[i] ='\0';
return (dest);
}
