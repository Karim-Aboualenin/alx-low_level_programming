#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 * @argc: the counter for arguments
 * @argv: an array of strings for arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;
if (argc == 1)
printf("0\n");
else
{
for (i = 0; i < argc; i++)
{
if (argv[1][0] >= '0' && argv[1][0] <= '9')
sum += atoi(argv[1]);
else
{
printf("Error\n");
return (0);
}
}
printf("%d\n", sum);
}
return (0);
}
