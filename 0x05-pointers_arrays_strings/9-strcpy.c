#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
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
 * _strcpy - copies the string pointed to by src, to the buffer pointed to by dest
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
