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
	size_t towrite;
	

	fd = open(filename, O_RDONLY);

	if (!fd || filename == NULL)
	{
		return (0);
	}
	bufread = malloc(letters + 1);

	if (bufread == NULL)
		return (0);

	toread = read(fd, bufread, letters);
	if (!toread)
		return (0);

	bufread[toread] = '\0';
	towrite = write(1, bufread, toread);
	if (towrite != toread)
	    return (0);
	free(bufread);
	close(fd);
	return (towrite);
}
