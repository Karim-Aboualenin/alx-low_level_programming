#include "3-calc.h"

/**
 * main - check the code
 * argc: thr number of arguments
 * argv: the array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int num1 ,num2;
char op;
if (argc > 4)
{
printf ("Error");
exit(98);
}
op = argv[2];
if (op != '+' && op != '-' && op != '*' && argv[2] != '/')
{
printf ("Error");
exit(99)
}
num1 = argv[1];
num2 = argv[2];
get_op_func(op))(num1, num2);
return (0);
}
