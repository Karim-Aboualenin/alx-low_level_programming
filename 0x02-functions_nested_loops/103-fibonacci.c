#include <stdio.h>

/**
 * main - entry point to the program
 * Return: 0
 */
int main(void)
{
int a = 1;
int b = 2;
int temp;
int sum = a + b;
int sum_even;
while (sum < 4000000)
{
temp = sum;
sum = temp + b;
b = temp;
if (sum % 2 == 0)
sum_even += sum;
}
printf("%d\n", sum_even);
return (0);
}
