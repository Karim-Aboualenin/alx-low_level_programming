#include "main.h"

/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip to get from
 * one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff;
unsigned int num = 0;
diff = n ^ m;
while (diff > 0)
{
if (diff & 1)
num++;
diff >>= 1;
}
return (num);
}
