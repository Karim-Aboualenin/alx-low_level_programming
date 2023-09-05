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
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first sting
 * @s2: the second string
 * Return: pointer should point to
 * a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
int len1 = _strlen(s1), len2 = _strlen(s2), i = 0;
char *s;
if (len2 == 0)
{
s = malloc((len1) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
return (s);
}
if (len1 == 0)
{
s = malloc((len2) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len2; i++)
{
s[i] = s2[i];
}
return (s);
}
int k = 0;
s = malloc((len1 + len2) *sizeof(char) + 1);
if (s == NULL)
return (NULL)
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
for (int j = i; j < len2 + i; j++)
{
s[j] = s2[k++];
}
return (s);
}
