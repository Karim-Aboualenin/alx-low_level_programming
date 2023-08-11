#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int num_0 = 0;
int num_1 = 0;
int num_2 = 0;

while (num_0 < 8)
{
if (num_1 == num_2)
{
if (num_2 == 9)
{
num_0++;
num_1 = num_0 + 1;
num_2 = num_1 + 1;
}
else
{
num_2++;
continue;
}
}
putchar(48 + num_0);
putchar(48 + num_1);
putchar(48 + num_2++);
if (num_0 != 7 || num_1 != 8 || num_2 != 10)
{
putchar(',');
putchar(' ');
}
if (num_2 == 10)
{
num_1++;
num_2 = num_1 + 1;
}
if (num_1 == 9)
{
num_0++;
num_1 = num_0 + 1;
num_2 = num_1 +1;
}
}
putchar('\n');
return (0);
}
