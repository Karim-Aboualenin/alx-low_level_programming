#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: the string
 * Return: a pointer to the string
*/
char *leet(char *s)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j != '\0'; j++)
{
if (s[i] == a[j])
s[i] = b[j];
}
}
return (s);
}
