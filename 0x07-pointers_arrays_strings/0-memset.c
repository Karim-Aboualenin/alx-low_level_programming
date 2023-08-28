#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the address of area to fill
 * @b: the constant byte
 * @n: the size of the memory to fill
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i++] = b;
}
return (s);
}
