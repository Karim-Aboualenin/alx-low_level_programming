#include "main.h"

/**
 * print_diagonal - prints straight line wit n length
 * @n: the length of the line
 * Return: nothing
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
