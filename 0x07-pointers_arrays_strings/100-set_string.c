#include "main.h"

/**
 * set_string - a function that sets the value of a
 * pointer to a char.
 * @s: the string
 * @n: the size of the memory to fill
 */

void set_string(char **s, char *to)
{
 int i = 0;

for (i = 0; to[i] != '\0'; i++)
{
*(s[i]) = to[i];
}
}
