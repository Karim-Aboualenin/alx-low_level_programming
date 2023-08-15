#include "main.h"

/**
 * _islower - indicate if c is letter or not
 * @c: character to check
 * Return: 1 if c is letter and 0 otherwise
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
return (1);
return (0);
}
