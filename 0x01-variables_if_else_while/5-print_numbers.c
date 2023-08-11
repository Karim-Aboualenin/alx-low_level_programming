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
printf("%d", num++);
}
printf("\n");
return (0);
}
