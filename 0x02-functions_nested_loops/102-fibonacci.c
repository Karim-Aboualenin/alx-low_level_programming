#include <stdio.h>

/**
 * main - entry point to the program
 * Return: 0
 */
int main()
{
int a = 1;
int b = 2;
int temp;
int i;
int sum = a + b;
printf("%d, %d\n", a, b);
for (i = 0; i < 50;i++)
{
printf ("%d, ", sum);
temp =sum;
sum = temp + b;
b = temp;
}
return (0);
}
