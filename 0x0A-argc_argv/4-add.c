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
int i, j;
int k = 1;
if (argc == 1)
printf("0\n");
else
{
for (i = 0; i < argc - 1; i++)
{
for (j = 0; argv[k][j] != '\0'; j++)
{
if (argv[k][j] >= '0' && argv[k][j] <= '9')
sum += atoi(argv[k++]);
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
}
return (0);
}
