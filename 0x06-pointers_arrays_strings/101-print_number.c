#include "main.h"

/**
 * print_number - print integer
 * @n: the integer
 * Return: nothing
 */
void print_number(int n)
{
if (n == -2147483648)
{
_putchar('-');
_putchar('2');
_putchar('1');
_putchar('4');
_putchar('7');
_putchar('4');
_putchar('8');
_putchar('3');
_putchar('6');
_putchar('4');
_putchar('8');
}
else if (n == 0)
_putchar('0');
else
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n  / 10)
print_number(n / 10);
_putchar('0' + n % 10);
}
}
