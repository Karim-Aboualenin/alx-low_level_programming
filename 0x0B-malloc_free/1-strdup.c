#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: the size of the memory to print
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *s;
int i = 0;
s = malloc(sizeof(str));
if (s == NULL)
return (NULL);
while (str[i] != '\0')
{
s[i] = str[i];
i++;
}
return (s);
}
