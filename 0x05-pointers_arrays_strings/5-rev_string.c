#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: the string
 * Return: nothing
*/
void rev_string(char *s)
{
int len = 0;
int i;
char temp;
while (*s != '\0')
{
len++;
s++;
}
for (i = 0; i < len; i++)
{
s--;
}
for (i = 0; i < len / 2; i++)
{
temp = *s;
*s = *(s + len -i -1);
*(s + len -i -1) = temp;
s++;
}
}
