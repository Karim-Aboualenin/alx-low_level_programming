#include "main.h"

/**
 * print_number - print integer
 * @n: the integer
 * Return: nothing
 */
void print_number(int n)
{
if (n == 0)
_putchar('0');
else
{
if (n < 0)
{
_putchar('-');
n = -n;
}
 (n/10)
print_number(n / 10);
_putchar('0' + n % 10);
}
}
