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
	size_t fd, toread;

	fd = open(filename, O_RDONLY);

	if (fd != 3 || filename == NULL)
	{
		return (0);
	}
	bufread = malloc(letters + 1);

	if (bufread == NULL)
		return (0);

	toread = read(fd, bufread, letters);

	bufread[toread] = '\0';

	if (!toread)
		return (0);
	printf("%s\n", bufread);
	close(fd);
	return (toread);
}
