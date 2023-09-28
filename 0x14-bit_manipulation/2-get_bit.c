#include "main.h"

/**
 * get_bit - Write a function that returns
 * the value of a bit at a given index.
 * @n: the number
 * @index: the index
 * Return:the bit
 * 
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int number;
number = n >> index;
if (number % 2  == 1)
return(1);
else
return (0);
}
