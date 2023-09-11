#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int i = 0;
<<<<<<< Updated upstream
    *str = __FILE__;
    while(str[i] != '\0')
    {
        _putchar(str[i]);
=======
    str = __FILE__;
    while(str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
>>>>>>> Stashed changes
    }
    _putchar('\n');
}
