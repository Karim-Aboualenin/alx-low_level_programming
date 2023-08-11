#include <stdio.h>

/**
 * main - the entry pint to function
 * Return:return 0 if success
*/
int main(void)
{
int c = 'a';
int i;

for (i = 0; i < 26; i++)
{
if (c == 'e' || c == 'q')
c++;
else
putchar(c++);
}
putchar('\n');
return (0);
}
