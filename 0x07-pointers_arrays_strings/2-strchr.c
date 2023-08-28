#include "main.h"
#include <stddef.h>
/**
 * _strchr - Write a function that locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: pointer to string
 */

char *_strchr(char *s, char c)
unsigned int i = 0;
char *ptr = NULL;
int found = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
ptr = s + i;
found = 1;
break;
}
i++;
}
if (found == 0)
ptr = NULL;
return (ptr);
}
