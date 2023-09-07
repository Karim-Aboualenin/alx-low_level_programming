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
void *s;
unsigned int i;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size) /* return ptr if reallocating same old size */
return (ptr);
if (ptr == NULL) /* malloc new size if ptr is originally null */
{
s = malloc(new_size);
if (s == NULL)
return (NULL);
else
return (s);
}
s = malloc(new_size); 
if (p == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((char *)s + i) = *((char *)ptr + i);
free(ptr); /* free old ptr */
return (s);
}
