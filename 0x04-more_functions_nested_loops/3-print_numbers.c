#include "main.h"

/**
 *print_numbers - print 0 to 9, followed by new line
 * Return: nothing
 */
void print_alphabet(void)
{
int c = '0';
int i;
for (i = 0; i <= 9; i++)
{
_putchar(c++);
}
_putchar('\n');
}
