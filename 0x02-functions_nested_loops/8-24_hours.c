#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: nothing
 */
void jack_bauer(void)
{
int minutes = 0, hours =0;
while(hours < 24)
{
while (minutes < 60)
{
_putchar ('0'+ hours / 10);
_putchar ('0' + hours % 10);
_putchar(':');
_putchar ('0' + minutes / 10);
_putchar ('0' + minutes % 10);
_putchar ('\n');
minutes++;
}
minutes = 0;
hours++;
}
}
