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
 * _str_concat - a function that concatenates two strings. 
 * @s1: the first sting
 * @s2: the second string
 * Return: pointer should point to
 * a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2, i = 0, j = 0, k = 0;
char *s;
len1 = _strlen(s1);
len2 = _strlen(s2);
s = malloc((len1 + len2) *sizeof(int) + 1); 
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
for (j = i;j < len2 + i; j++)
{
s[j] = s2[k++];
}
return(s);
}
