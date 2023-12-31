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
 * cap_string - a function that capitalizes all words of
 * a string.
 * @s: string
 * Return: a pointer to destination
 */
char *cap_string(char *s)
{
int i, len;
len = _strlen(s);

if (s[0]  >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
for (i = 1; i < len; i++)
{
if ((s[i] == ',' || s[i] == ';' || s[i] == '.'
|| s[i] == '!' || s[i] == '?' || s[i] == '"'
|| s[i] == '(' || s[i] == ')' || s[i] == '{'
|| s[i] == '}' || s[i] == ' '
|| s[i] == '\n' || s[i] == '\t')
&& (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
s[i + 1] = s[i + 1] - 32;
}
return (s);
}
