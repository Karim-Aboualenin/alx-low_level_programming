#include "main.h"

/**
 * print_diagonal - prints straight line wit n length
 * @n: the length of the line
 * Return: nothing
 */
void print_diagonal(int n)
{
int i;

if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
_putchar('\n');
}
_putchar('\\');
_putchar('\n');
}
}
