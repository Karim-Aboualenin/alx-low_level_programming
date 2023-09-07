#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: the allocated memory
 * @old_size: old size of the allocated memory
 * @new_size: new size of the allocated memory
 * Return: pointer to the allocated array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *s;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (ptr);
}
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
s = malloc(new_size);
if (s == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((char *)s +i) = *((char *)ptr +i);
free(ptr);
return (s);
}
