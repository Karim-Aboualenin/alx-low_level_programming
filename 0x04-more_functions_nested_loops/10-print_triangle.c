#include "main.h"

/**
 * print_triangle - prints straight a triangle
 * @n: the size of tiangle
 * Return: nothing
 */
void print_diagonal(int n)
{
int i, j, k;

if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n-i; j++)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
