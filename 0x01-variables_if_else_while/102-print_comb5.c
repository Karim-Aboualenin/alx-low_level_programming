#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int num_0 = 0, num_1 = 0, num_2 = 0, num_3 = 1;

while (num_0 != 9 || num_1 != 9 || num_2 != 10 || num_3 != 0 )
{

putchar(48 + num_0);
putchar(48 + num_1);
putchar(' ');
putchar(48 + num_2);
putchar(48 + num_3++);
if (num_0 != 9 || num_1 != 8 || num_2 != 9 || num_3 != 10)
{
putchar(',');
putchar(' ');
}
if (num_3 == 10)
{
num_2++;
num_3 = 0;
}
if (num_2 == 10)
{
if (num_1 < 8)
{
num_1++;
num_3 = num_1 + 1;
num_2 = num_0;
}
else if (num_1 == 8)
{
num_1++;
num_3 = 0;
num_2 = num_0 + 1;
}
else
{
num_0++;
num_1 = 0;
num_3 = num_1 + 1;
num_2 = num_0;
}}}
putchar('\n');
return (0);
}
