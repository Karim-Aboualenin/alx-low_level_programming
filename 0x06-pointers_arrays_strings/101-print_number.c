#include "main.h"

/**
 * print_number - print integer
 * @n: the integer
 * Return: nothing
 */
void print_number(int n)
{
unsigned int num = n;
if (num == 0)
_putchar('0');
else
{
if (num < 0)
{
_putchar('-');
num = -num;
}
if (num  / 10)
print_number(num / 10);
_putchar('0' + num % 10);
}
}
