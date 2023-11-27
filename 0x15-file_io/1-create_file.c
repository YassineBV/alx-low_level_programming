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
	int fds, txtLent, wrchk;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fds = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fds < 0)
		return (-1);
	txtLent = strlen(text_content);

	wrchk = write(fds, text_content, txtLent);

	if (wrchk != txtLent)
		return (-1);

	return (1);

}
