#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int num = 0;
int i;

for (i = 0; i < 10; i++)
{
putchar(48 + num++);
}
putchar('\n');
return (0);
}
