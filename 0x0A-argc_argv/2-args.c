#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @argc: the counter for arguments
 * @argv: an array of strings for arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i++]);
}
return (0);
}
