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
 * infinite_add -  a function that adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: buffer have the answer
 * @size_r: the size of buffer
 * Return: a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, len1, len2, longer, sum, carry = 0;
int k = 0, j = 0, temp;

len1 = _strlen(n1);
len2 = _strlen(n2);
if (len1 >= len2)
longer = len1;
else
longer = len2;

if (longer > size_r)
return (0);
while (--len1 >= 0 || --len2 >= 0 || carry != 0)
{
sum = 0;
if (len1 >= 0)
sum = sum + n1[len1] - '0';
if (len2 >= 0)
sum = sum + n2[len2] - '0';
sum = sum + carry;
carry = sum / 10;
r[i++] = sum % 10 + '0';
}
r[i] = '\0';
j = i - 1;
for (k = 0; k < i / 2; k++)
{
temp = r[k];
r[k] = r[j];
r[j] = temp;
j--;
}
return (r);
}
