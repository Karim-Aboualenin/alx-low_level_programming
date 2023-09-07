#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return the length of string
 * @s: the string
 * Return: the length of the string
*/
int _strlen(char *s)
{
int len = 0;
if (s == NULL)
return (0);
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first sting
 * @s2: the second string
 * @n: the first bytes of s2 to be concatenated
 * Return: pointer should point to
 * a newly allocated space in memory which contains
 * the contents of s1, the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i = 0, j = 0, k = 0;
char *s;
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n >= len2)
{
n = len2;
}
s = malloc((len1 + n) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
for (j = i; j < n + i; j++)
{
s[j] = s2[k++];
}
return (s);
}
