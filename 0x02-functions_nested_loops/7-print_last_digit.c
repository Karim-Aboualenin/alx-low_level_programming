#include "main.h"

/**
 * print_last_digit - return the last digit of a number
 * @n: number to get its last digit
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
if (n < 0)
		n *= -1;

       	_putchar('0' + (n % 10));

	return (n % 10);
}
