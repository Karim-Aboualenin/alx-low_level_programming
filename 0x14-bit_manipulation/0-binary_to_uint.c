#include "main.h"
/**
 * pow - get the power of number
 * @base: the base
 * @exponent: the exponent
 * Return: the result
*/

double pow(double base, double exponent)
{
double result = 1.0;
int i;
for (i = 0; i < exponent; ++i) {
result *= base;
}
return (result);
}
/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: the binary number
 * Return: unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
int i = 0, count, j = 0;
double k;
unsigned int num = 0, binary;
if (b == NULL)
{
return (0);
}

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}
count = i;
for (k = count - 1; k >= 0; k--)
{
binary = b[j] - 48;
num += binary * (unsigned int)pow(2, k);
j++;
}
return (num);
}
