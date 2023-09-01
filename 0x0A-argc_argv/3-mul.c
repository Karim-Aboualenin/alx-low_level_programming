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
int mul;
if (argc != 3)
printf("Error");
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
