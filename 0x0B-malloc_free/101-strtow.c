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
 * strtow - a function that splits a string into words.
 * @str:  a string
 *
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
char **s;
int i = 0, counter = 0, index = 0, j = 0, start, len, k = 0, l = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
counter++;
}
if (counter == 0)
return (NULL);
s = malloc(sizeof(char *) * (counter + 1));
if (s == NULL)
return (NULL);
s[counter] = NULL;
for (j = 0; str[j]; j++)
{
if (str[j] != ' ' && (str[j - 1] == ' ' || j == 0))
{
start = j;
len = 0;
while (str[j] != ' ' && str[j])
{
len++, j++;
}
s[index] = malloc(sizeof(char) * (len + 1));
if (s[index] == NULL)
{
for (k = 0 ; k < index; k++)
free(s[k]);
free(s);
return (NULL);
}
for (l = 0; l < len; l++)
s[index][l] = str[start + l];
s[index][l] = '\0';
index++;
}}
return (s);
}
