#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *str;
int i = 0;
str = __FILE__;
while(str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
