#include "main.h"

/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip to get from
 * one number to another.
 * @n: the first number
 * @index: the second number
 * Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num = 0;
num = n ^ m;
while (num > 0)
{
if (num & 1)
num++;
num >>= 1;
}
return (num);
}
