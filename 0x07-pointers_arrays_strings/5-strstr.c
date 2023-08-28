#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the set of bytes
 *
 * Return: pointer to string
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, j, k;
for(i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
k = i;
j = 0;
while (needle[j] != '\0')
{
if (haystack[k] == needle[j])
{
k++;
j++;
}
else
break;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
}
return (0);
}
