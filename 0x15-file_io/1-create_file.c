#include "main.h"
/**
 * create_file - Creates a file and writes text content.
 * @filename: Name of the file to create.
 * @text_content: Text to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fds, txtLent;

	if (filename == NULL)
		return (-1);

	fds = open(filename, O_RDONLY | O_WRONLY | O_CREAT, 0600);
	txtLent = strlen(text_content);

	write(fds, text_content, txtLent);

	return (1);

}
