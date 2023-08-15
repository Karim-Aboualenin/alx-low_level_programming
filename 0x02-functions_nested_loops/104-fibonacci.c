#include <stdio.h>

/**
 * main - entry point to the program
 * Return: 0
 */
int main(void)
{
unsigned long a = 1, a_start, a_end;
unsigned long b = 2, b_start, b_end;
int i;
unsigned long sum , sum_start, sum_end;
unsigned long carry;
printf("%d, %li", a, b);
for (i = 0; i < 90; i++)
{
sum = a + b;
a = b;
b = sum;
printf(", %lu", sum);
}
a_start = a / 100000000000;
a_end = a % 100000000000;
b_start = b / 100000000000;
b_end = b % 100000000000;
for(i = 0; i < 6; i++)
{
carry = (a_end + b_end) / 100000000000;
sum_end = (a_end + b_end) -carry * 10000000000;
sum_start = (a_start + b_start) + carry;
printf(", %li%li", sum_start, sum_end);
a_start = b_start;
a_end = b_end;
b_start = sum_start;
b_end = b_end;
}
return (0);
}
