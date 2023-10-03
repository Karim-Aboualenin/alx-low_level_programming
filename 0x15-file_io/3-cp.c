#include "main.h"
/**
 * _leave: print an error message and exit with certain status
 * @status: exit_status
 * @filename: the name of the file
 * @fd: the file descriptor
 * Return:nothing
*/
void _leave(int status, char *filename, int fd)
{
switch (status)
{
case (97):
dprintf (STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
    break;
case (98):
dprintf (STDERR_FILENO, "Can't read from file %s\n", filename);
exit(98);
case (99):
dprintf (STDERR_FILENO, "Can't write to  %s\n", filename);
exit(99);
case (100):
dprintf (STDERR_FILENO, "Can't close fd %d", fd);
exit(100);
break;
default:
break;
}
}

/**
 * main - check the code
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0.
 */

int main(int ac, char **av)
{
int fd_1, fd_2, rd, wr, cl_1, cl_2;
char buffer[1024]; 
if (ac != 3)
_leave(97, NULL, 0);
fd_1 = open(av[1], O_RDONLY);
if (fd_1 == -1)
_leave (98, av[1], 0);
fd_2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0604);
if (fd_2 == -1)
_leave (99, av[2], 0);
while ((rd = read (fd_1, buffer, 1024)) != 0)
{
if (rd == -1)
_leave (98, av[1], 0);
wr = write (fd_2, buffer, rd);
if (wr == -1)
_leave (99, av[2], 0);
}
cl_1 = close(fd_1);
if(cl_1 == -1)
_leave (100, NULL, fd_1);
cl_2 = close(fd_2);
if(cl_2 == -1)
_leave (100, NULL, fd_2);
return (0);
}
