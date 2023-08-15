#include <stdio.h>

/**
 * main - entry point to the program
 * Return: 0
 */
int main(void)
{
int a = 1;
long b = 2;
long temp;
int i;
long sum = a + b;
sum_even;
printf("%d, %li, ", a, b);
while (sum < 4000000)
{
temp = sum;
sum = temp + b;
b = temp;
if (sum % 2 == 0)
sum_even += sum;
}
printf("%li\n", sum_even);
return (0);
}
