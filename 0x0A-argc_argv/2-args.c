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
while (argc >=0)
{
printf("%s\n", argv[argc++]);
}
return (0);
}
