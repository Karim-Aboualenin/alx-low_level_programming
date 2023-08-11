#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
char c = 'a';
int i;

for (i = 0; i < 26; i++)
{
putchar(c++);
}
putchar('\n');
return (0);
}
