#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int num_0 = 0;
int num_1 = 0;

while(num_0 < 9)
{
if (num_0 == num_1)
{
num_1++;
continue;
}
putchar(48 + num_0);
putchar(48 + num_1++);
if (num_0 != 8 || num_1 != 10)
{
putchar(',');
putchar(' ');
}
if (num_1 == 10)
{
num_0++;
num_1 = num_0 + 1;
}

}
putchar('\n');
return (0);
}
