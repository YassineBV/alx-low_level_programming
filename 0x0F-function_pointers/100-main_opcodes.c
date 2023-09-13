#include <stdio.h>
#include <stdlib.h>
/**
 * opcod_funct - Print hexadecimal representation of arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 */
void opcod_funct(char *argv, int argc)
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%.2hhx", argv[n]);

		if (n < argc - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
}

/**
 * main - Entry point.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcod_funct((char *) &main, i);

	return (0);
}
