#include "main.h"

/**
 * print_alphabet - print alphabets, followed by new line
 * Return: nothing
 */
void print_alphabet(void)
{
int c = 'a';
int i;
for (i = 0; i < 26; i++)
{
_putchar(c++);
}
_putchar('\n');
}
