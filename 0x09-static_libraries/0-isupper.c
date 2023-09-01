#include "main.h"

/**
 * _isupper - indicate if the letter is upper or not
 * @c: character to check
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
