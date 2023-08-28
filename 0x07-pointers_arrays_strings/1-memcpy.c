#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: the address of area to be filled
 * @src: the address of area to be copied
 * @n: the size of the memory to fill
 *
 * Return: pointer to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
