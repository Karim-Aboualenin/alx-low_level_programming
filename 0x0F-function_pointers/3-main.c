#include "3-calc.h"

/**
 * main - check the code
 * argc: thr number of arguments
 * argv: the array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int (*operate)(int , int);
int num1 ,num2;
int result;
char* op;
printf("%d", argc);
if (argc != 4)
{
printf ("Errorsgvhx\n");
exit(98);
}
op = argv[2];
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operate = get_op_func(op);
if (operate == 0)
{
printf ("Error\n");
exit(99);
}
result = operate(num1, num2);
printf("%d", result);
return (0);
}
