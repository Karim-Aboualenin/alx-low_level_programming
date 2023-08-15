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
printf("%d, %li, ", a, b);
for (i = 0; i < 47; i++)
{
printf("%li, ", sum);
temp = sum;
sum = temp + b;
b = temp;
}
printf("%li\n", sum);
return (0);
}
