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
int i = 0;
if (s == NULL)
return (0);
while (*(s + i) != '\0')
i++;
return (i);

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
	unsigned int i, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	n = n > len2 ? len2 : n;

	str = malloc(sizeof(*s) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[len1 + i] = s2[i];
	s[len1 + n] = '\0';

	return (str);
}
