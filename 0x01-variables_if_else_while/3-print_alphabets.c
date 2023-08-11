#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int c = 'a';
int i;
int C = 'A';

for (i = 0; i < 26; i++)
{
putchar(c++);
}
for (i = 0; i < 26; i++)
{
putchar(C++);
}
putchar('\n');
return (0);
}
