#include "main.h"
/**
 * read_textfile - Reads a text file and prints its content.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: Number of letters read, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufread;
	int fd, toread, toWrite;


	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	bufread = malloc(letters);

	if (bufread == NULL)
		return (0);

	toread = read(fd, bufread, letters);
	if (toread == -1)
		return (0);

	bufread[toread] = '\0';
	toWrite = write(STDOUT_FILENO, bufread, toread);
	if (toWrite == -1)
		return (0);
	free(bufread);
	close(fd);
	return (toWrite);
}
