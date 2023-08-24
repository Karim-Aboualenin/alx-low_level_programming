#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  a function that prints a buffer.
 * @b - the buffer
 * @size: the size of buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
int i, j = 0, k = 0, temp, l = 0, temp_2;
int address = 0x00;
printf("%x\n", b[0]);
for (i = 0; i <= size; i = i + 10)
{
printf("%.8x:", address + l++ * 0x0a);
temp = j;
for (; j < temp + 10; j = j + 2)
{
if (j + 1 < size)
printf(" %.2x%.2x", b[j], b[j + 1]);
else if (j < size)
printf(" %.2x  ", b[j]);
else
printf("     ");
}
printf(" ");
temp_2 = k;
for (; k < temp_2 + 10; k++)
{
if (b[k] >= 32)
printf("%c", b[k]);
else
printf(".");
}
printf("\n");
}
}
