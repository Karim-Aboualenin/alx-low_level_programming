#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14 followed by a new line
 * Return: nothing
 */
void more_numbers(void)
{
int c = 0;
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
_putchar('0' + c / 10);
_putchar('0' + c % 10);
}
_putchar('\n');
c = 0;
}
}
