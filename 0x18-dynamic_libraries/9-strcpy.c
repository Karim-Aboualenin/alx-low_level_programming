#include "main.h"




/**
 * _strcpy - copies a string to another string
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int len, i;
len = _strlen(src);
for (i = 0; i <= len; i++)
{
*dest = *src;
dest++;
src++;
}
for (i = 0; i <= len; i++)
{
dest--;
}
return (dest);
}
