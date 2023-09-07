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
 * check_Null- handle null strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2
 * Return: the pointer if it's null
*/

char *check_Null(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1), len2 = _strlen(s2);
if (len2 == 0)
{
s = malloc((len1) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
s[i] = s1[i];
return (s);
}
if (len1 == 0)
{
if (n >= len2)
{
s = malloc((len2) * sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len2; i++)
s[i] = s2[i];
return (s);
}
s = malloc((n) * sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < n; i++)
{
s[i] = s2[i];
}
return (s);
}
return (NULL);
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
s = check_Null(s1, s2, n);
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n >= len2)
{
s = malloc((len1 + len2) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
for (j = i; j < len2 + i; j++)
{
s[j] = s2[k++];
}
return (s);
}
s = malloc((len1 + n) * sizeof(char) + 1);
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
