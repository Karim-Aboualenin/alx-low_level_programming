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
pass[i] = rand() % 78;
sum += pass[i] + '0';
putchar(pass[i] + '0');
if ((2772 - sum)  < 126)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
