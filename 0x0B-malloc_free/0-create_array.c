#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: the size of the memory to print
 * @c: thespecific char.
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
