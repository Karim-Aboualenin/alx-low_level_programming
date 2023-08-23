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
for (i = 0; i < len; i++)
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
