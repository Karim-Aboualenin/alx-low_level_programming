#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: 2d array
 * @size: the size of array
 */
void print_diagsums(int *a, int size)
{
int i, j, sum = 0;
for (i = 0; i < size i++)
{
for j = 0; j < size ;j++)
{
if (i == j)
sum += a[i][j];
}
}
printf("%d, ",sum);
sum = 0;
for (i = 0; i < size i++)
{
for j = 0; j < size ;j++)
{
if (i + j == size - 1)
sum += a[i][j];
}
}
printf("%d\n",sum);
}
