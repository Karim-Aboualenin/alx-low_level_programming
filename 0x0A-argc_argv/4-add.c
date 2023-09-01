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
int k = 1;
if (argc == 1)
printf("0\n");
else
{
for (i = 0; i < argc - 1; i++)
{
if (argv[1][0] >= '0' && argv[1][0] <= '9')
sum += atoi(argv[k++]);
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
