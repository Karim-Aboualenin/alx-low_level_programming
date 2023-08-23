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
 * _strcmp - function that compares two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if equal, greater than 0 if the first non-matching
 * character in s1 is greater (in ASCII) than that of s2 and 
 * smaller than 0 if the first non-matching character in s1
 * is lower (in ASCII) than that of s2
*/
int _strcmp(char *s1, char *s2)
{
int len1, len2, i;

len1 = _strlen(s1);
len2 = _strlen(s2);
if (len1 == len2)
{
for (i = 0; i < len1; i++)
{
if (s1[i] == s2[i])
{}
else 
return ((int)s1[i] - (int)s2[i]);
}
return (0);
}
else if (len1 > len2)
{
for (i = 0; i < len2; i++)
{
if (s1[i] == s2[i])
{}
else 
return ((int)s1[i] - (int)s2[i]);
}
return ((int)s1[i]);
}
else
{
for (i = 0; i < len1; i++)
{
if (s1[i] == s2[i])
{}
else 
return ((int)s1[i] - (int)s2[i]);
}
return (-1 *(int)s2[i]);
}
}
