#include "main.h"

/**
 * print_square - prints square wit n size
 * @n: the size of the square
 * Return: nothing
 */
void print_square(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
