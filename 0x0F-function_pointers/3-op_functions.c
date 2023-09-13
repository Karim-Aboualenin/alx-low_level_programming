#include "3-calc.h"

/**
 * op_add - add two number
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - sub two number
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the difference between a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiply two number
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divide two number
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the division of a and b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit (100);
}
return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit (100);
}
return (a % b);
}
