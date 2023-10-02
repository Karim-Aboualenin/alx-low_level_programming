#include "main.h"
/**
 * _strlen - return the length of string
 * @s: the string
 * Return: the length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file 
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 in sucess ,-1 in faliure
*/

int create_file(const char *filename, char *text_content)
{
int fd, rd;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (text_content != NULL)
{
rd = write(fd, text_content, _strlen(text_content));
}
return (1);
}
