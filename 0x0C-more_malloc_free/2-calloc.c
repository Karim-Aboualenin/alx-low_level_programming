#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that concatenates two strings.
 * @nmemb: number of elements in the array
 * @size: the size of one elemnt
 * Return: pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  unsigned int i = 0;
  char *ptr;
  if (nmemb == 0 || size == 0)
    return (NULL);
  ptr = malloc(nmemb * size);
  if (ptr == NULL)
    return (NULL);
 for (i = 0; i < nmemb * size; i++)
   ptr[i] = 0;
  return (ptr);
}
