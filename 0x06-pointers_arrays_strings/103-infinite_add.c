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
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: nothing
*/
void reverse_array(char *a, int n)
{
int i = 0, j = n - 1, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
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
int i = 0, len1, len2, longer, sum = 0, carry = 0;

len1 = _strlen(n1);
len2 = _strlen(n2);
if (len1 >= len2)
longer = len1;
else
longer = len2;

if(longer > size_r)
return (0);
while (--len1 >= 0 || --len2 >= 0 || carry > 0)
{
if (len1 >= 0)
sum = sum + n1[len1] - '0';
if (len2 >= 0)
sum = sum + n2[len2] - '0';
sum = sum + carry;
carry = sum / 10;
r[i++] = sum % 10 + '0';
}
reverse_array(r, i);
return (r);
}
