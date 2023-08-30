#include "main.h"

/**
 * check_prime_number; a  function that returns 1 if the
 * input integer is a prime number
 * @n: the number to be checked
 * @num: all the numbers till the number to be checked
 * Return: the length of a string.
*/

int check_prime_number(int n, int num)
{
if (n == num)
return (1);
if (n % num == 0)
return (0);
return (check_prime_number(n, num + 1));
}

/**
 * is_prime_number; a function that returns 1 if the
 * input integer is a prime number
 * @n: the number to be checked
 * Return: the length of a string.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime_number(n, 2));
}
