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
return (0);
rd = read (fd, message, letters);
wr = write (1, message, rd);
close (fd);
free (message);
return (wr);
}
