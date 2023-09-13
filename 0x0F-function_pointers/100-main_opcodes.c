#include "function_pointers.h"

/**
 * main - check the code
 * @argc: thr number of arguments
 * @argv: the array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int byte;
int i = 0;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
byte = atoi(argv[1]);
if (byte < 0)
{
printf("Error\n");
exit(2);
}
while (i < byte)
{
if (i == 0)
{
printf("%02x", *((char *)main + i));
i++;
continue;
}
printf(" %02x", *((char *)main + i));
i++;
}
printf("\n");
return (0);
}