#include <stdio.h>

/**
 * main - entry point to the program
 * Return: 0
 */
int main()
{
int a = 1;
long b = 2;
long temp;
int i;
long sum = a + b;
printf("%d, %d, ", a, b);
for (i = 0; i < 47;i++)
{
printf ("%d, ", sum);
temp =sum;
sum = temp + b;
b = temp;
}
printf ("%d\n", sum);
return (0);
}
