#include "main.h"

/**
 * _strlen - return the length of string
 * @s: the string
 * Return: the length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * leet - a function that encodes a string into 1337
 * @s: the string
 * Return: a pointer to the string
*/
char *leet(char *s)
{
int i, j, len;
len = _strlen(s);
char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (i = 0; i < len; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == a[j])
s[i] = b[j];
}
}
return (s);
}
