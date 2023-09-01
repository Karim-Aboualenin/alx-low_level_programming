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
 * _strcat - This function appends the src string to the dest string
 * @src: src
 * @dest: the destination
 * Return: a pointer to destination
 */
char *_strcat(char *dest, char *src)
{
int len_dest, len_src;
int i, j = 0;

len_dest = _strlen(dest);
len_src = _strlen(src);
for (i = len_dest; i <= len_src + len_dest; i++)
{
dest[i] = src[j++];
}
return (dest);
}
