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
 * string_toupper - a function that changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: a pointer to destination
 */
char *string_toupper(char *s)
{
int i, len;

len = _strlen(s);
for (i = 0; i < len; i++)
{
if(s[i] >= 'a' && s[i] <='z')
s[i] = s[i] - 32;
}
return (s);
}
