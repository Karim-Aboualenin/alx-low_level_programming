#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int c = 'z';
int i;

for (i = 0; i < 26; i++)
{
putchar(c--);
}
putchar('\n');
return (0);
}
