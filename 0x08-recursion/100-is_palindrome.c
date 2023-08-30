#include "main.h"

/**
 * _strlen_recursion- a function that returns the length of a string.
 * @s: the string
 * Return: the length of a string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}


/**
 * check_palindrome - a function that returns 1 if a 
 * string is a palindrome and 0 if not
 * @start: the start of string
 * @end: the end of string
 * Return: 1 if a string is a palindrome and 0 if not
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - a function that returns 1 if a 
 * string is a palindrome and 0 if not
 * @s: the string
 * Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
