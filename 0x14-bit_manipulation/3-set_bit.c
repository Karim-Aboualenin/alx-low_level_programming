#include "main.h"

/**
 * set_bit -a function that sets the value of a bit
 * to 1 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 if it worked and -1 if error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;
if (index > 64)
return (-1);
mask <<= index;
*n |= mask;
return (1);
}
