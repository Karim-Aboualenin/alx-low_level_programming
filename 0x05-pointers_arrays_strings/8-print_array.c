#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array
 * @n: the number of integers
 * Return: nothing
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", *a);
else
printf(", %d", *a);
a++;
}
_putchar('\n');
}
