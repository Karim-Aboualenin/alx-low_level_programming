#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - indicate if strig is digit or not
 * @s: string to check
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] < '0' && s[i] > '9')
return (0);
}
return (1);
}

/**
 * print_Error - print Error using putchar
 * Return: nothing
 */

void print_Error(char *str)
{
int i = 0;
for (i = 0; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
}

/**
 * is_zero - indicate if string is zero or not
 * @s: string to check
 * Return: 1 if c is zero and 0 otherwise
 */
int is_zero(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != '0')
return (0);
return (1);
}
}
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
 * mul - a function that multiplies two positive numbers.
 * @num1: first number
 * @num2: second number
 * Return: pointer to the result
 */
char *mul(char *num1, char *num2)
{
int len1, len2, carry, i, j, k, a, b, n = 0;
char *result;
len1 = _strlen(num1);
len2 = _strlen(num2);
result = malloc(len1 + len2 + 1);
if (result == NULL)
{
print_Error("Error");
exit(98);
}
for (i = 0; i < len1 + len2; i++)
result[i] = '0';
result[i] = '\0';
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
{
a = num1[i] - '0';
b = num2[j] - '0';
carry = (a * b) + (result[k] - '0') + carry;
result[k] = carry % 10 + '0';
carry = carry / 10;
}
result[k] += carry;
}

while (result[n] == '0')
n++;
if (n > 0)
{
for (j = 0; j <= len1 + len2 - i; j++)
result[j] = result[j + i];
}
return (result);
}
/**
 * main - a program that multiplies two positive numbers.
 * @argc: argument counter
 * @argv: the arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
char *num1, *num2, *result;
int i;
num1 = argv[1];
num2 = argv[2];
if (argc != 3 || _isdigit(num1) == 0 || _isdigit(num2) == 0)
{
print_Error("Error");
exit (98);
}
if (is_zero(num1) == 1 || is_zero(num2) == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}
result = mul(num1, num2);
print_Error(result);
free(result);
return (0);
}
