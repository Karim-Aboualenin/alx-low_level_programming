#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the name of the file
 * @letters: the number of letter should be printed
 * Return: the number of letters it should read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *message;
int fd, rd, wr;
if (filename == NULL)
return (0);
message = malloc(sizeof(char) * letters);
if (message == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(message);
close(fd);
return (0);
}
rd = read(fd, message, letters);
if (rd == -1)
{
free(message);
close(fd);
return (0);
}
wr = write(STDOUT_FILENO, message, rd);
if (wr == -1 || wr != rd)
{
free(message);
close(fd);
return (0);
}
close(fd);
free(message);
return (wr);
}
