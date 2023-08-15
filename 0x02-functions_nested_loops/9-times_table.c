#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing
 */
void times_table(void)
{
int num = 0;
int i = 0;
int mul = 0;
for (num = 0; num < 10; num++)
{
for(i = 0; i < 10; i++)
{
mul = num * i; 
_putchar ('0' + mul / 10);
_putchar ('0' + mul % 10);
if(i != 9)
{
_putchar (',');
_putchar (' ');
_putchar (' ');  
}
}
_putchar ('\n');
}
}
