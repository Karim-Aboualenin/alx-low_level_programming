#include "main.h"

/**
 * print_binary -  a function that prints the binary
 * representation of a number.
 * @n: the number
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
int len = 0;
unsigned long int copy = n, mask = 1;
while (copy > 0)
{
len++;
copy = copy >> 1;
}
if (len > 1)
mask = mask << (len - 1);
while (mask > 0)
{
if ((n & mask))
_putchar('1');
else
_putchar('0');
mask = mask >> 1;
}
}
