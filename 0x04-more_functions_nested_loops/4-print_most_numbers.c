#include "main.h"

/**
 *print_most_numbers - print 0 to 9 without 2 and 4, followed by new line
 * Return: nothing
 */
void print_most_numbers(void)
{
int c = '0';
int i;
for (i = 0; i <= 9; i++)
{
if (c == '2' || c == '4')
{
c++;
continue;
}
_putchar(c++);
}
_putchar('\n');
}
