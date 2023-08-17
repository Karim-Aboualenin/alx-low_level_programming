#include <stdio.h>

/**
 * main - fizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
int n = 100;
int i;

for (i = 1; i <= n; i++)
{
if (i == 1)
printf("1");
else if ((i % 3 == 0) && (i % 5 == 0))
printf(" FizzBuzz");
else if (i % 3 == 0)
printf(" Fizz");
else if (i % 5 == 0)
printf(" Buzz");
else
printf(" %d", i);;
}
printf("\n");
}
