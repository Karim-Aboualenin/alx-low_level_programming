#include <stdio.h>

/**
 * main -the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
long int num = 612852475143;
long int i = 2;

while (i < num)
{
if (num % i == 0)
{
num = num / i;
i = 2;
}
i++;
}
printf("%li\n", num);
return (0);
}
