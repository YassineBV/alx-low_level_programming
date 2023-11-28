#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
int main(int ac, char **av)
{
	int fd1, fd2, toread, toWrit;
	char *file_from, *file_to, *reaBuf[1024];
	if (ac != 3)
	{
		dprintf(2,"Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];

	if (file_from == NULL)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE %s\n", av[1]);
		exit(98);
	}
	fd1 = open(file_from, O_RDONLY);

	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	toread = read(fd1, reaBuf, 1024);
	reaBuf[toread] = '\0';
	fd2 = open(file_to,  O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_from);
		exit(99);
	}
	 close(fd1);
	toWrit = write(fd2, reaBuf,sizeof(reaBuf));
	if (toWrit < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	close(fd2);
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd1 %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd2 %d\n", fd2);
		exit(100);
	}
	return (0);
}
