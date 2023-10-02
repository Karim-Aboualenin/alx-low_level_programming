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
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 in sucess ,-1 in faliure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (text_content != NULL)
{
wr = write(fd, text_content, _strlen(text_content));
if (wr == -1)
{
close(fd);
return (-1);
}
}
return (1);
}
