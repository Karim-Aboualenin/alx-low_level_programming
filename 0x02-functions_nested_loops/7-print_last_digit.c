#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 * @n: number to get its last digit
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
if (n > 0)
{
_putchar(n % 10 + '0');
return (n % 10);
}
n = n % 10;
n = -1 * n;
_putchar(n % 10 + '0');
return (n % 10);
}
