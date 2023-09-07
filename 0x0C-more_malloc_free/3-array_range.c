#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minumim number
 * @max: maximum number
 * Return: pointer to the allocated array
 */
int *array_range(int min, int max)
{
int i, j = 0;
int *arr;
if (min > max)
return (NULL);
arr = malloc((max - min + 1) *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = min; i <= max; i++)
arr[j++] = i;
return (arr);
}
