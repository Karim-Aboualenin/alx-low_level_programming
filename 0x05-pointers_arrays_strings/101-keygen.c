#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[64];
int i, sum = 0, n;

srand (time(NULL));
for (i = 0; i < 64; i++)
{
pass[i] = rand() % 126;
sum += pass[i];
putchar(pass[i]);
if ((2772 - sum)  < 126)
{
n = 2772 - sum;
sum += n;
putchar(n);
break;
}
}
return (0);
}
