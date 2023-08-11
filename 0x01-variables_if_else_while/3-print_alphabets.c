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
printf("%c", c++);
}
for (i = 0; i < 26; i++)
{
printf("%c", C++);
}
printf("\n");
return (0);
}
