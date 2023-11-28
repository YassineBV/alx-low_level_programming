#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
void closeFiles(int fd1, int fd2);
/**
 * closeFiles - Closes two file descriptors and handles errors.
 * @fd1: First file descriptor.
 * @fd2: Second file descriptor.
 */
void closeFiles(int fd1, int fd2)
{
	int clos1 = close(fd1);
	int clos2 = close(fd2);

	if (clos1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (clos2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * main - Copies content from one file to another.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: 0 on success, exits with error codes on failure.
 */
int main(int ac, char **av)
{
	int fd1, fd2, toread, toWrit;
	char *file_from, *file_to, reaBuf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(file_to,  O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((toread = read(fd1, reaBuf, 1024)) > 0)
	{
		toWrit = write(fd2, reaBuf, toread);
		if (toWrit < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (toread == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	closeFiles(fd1, fd2);
	return (0);
}
