#include "main.h"

/**
 * times_table - prints the n times table, starting with 0
 * @n: the number which time table will be printed
 * Return: nothing
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
}
else
{
int num = 0, int i = 0, int mul = 0;
for (num = 0; num <= n; num++)
{
for (i = 0; i <= n; i++)
{
if (i == 0)
{
_putchar ('0');
continue;
}
mul = num * i;
if (mul < 10)
{
_putchar (',');
_putchar (' ');
_putchar (' ');
_putchar (' ');
_putchar ('0' + mul);
}
else if (mul < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + mul / 10);
_putchar('0' + mul % 10);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + mul / 100);
_putchar('0' + ((mul / 10) % 10));
_putchar('0' + mul % 10);
}}
_putchar('\n');
}}}
