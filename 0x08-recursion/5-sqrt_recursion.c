#include "main.h"

/**
 *  find_root- a function that check if a number have root and return it
 * @n: the number
 * @r: the root
 * Return: the natural square root of a number.
*/

int find_root(int n, int r)
{
if (r * r > n)
return (-1);
if (r * r == n)
return (r);
return (find_root(n, r + 1));
}


/**
 *  _sqrt_recursion- a function that returns the natural
 * square root of a number.
 * @n: the number
 * Return: the natural square root of a number.
*/

int _sqrt_recursion(int n)
{
if (n <= 0)
return (-1);
return (find_root(n, 1));
}
