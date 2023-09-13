#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (cmp != NULL & array != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
}