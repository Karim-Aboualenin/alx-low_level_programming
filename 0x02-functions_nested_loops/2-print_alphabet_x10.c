#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times, followed by new line
 * Return: nothing
 */
void print_alphabet_x10(void)
{
int c = 'a';
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(c++);
}
_putchar('\n');
c = 'a';
}
}
