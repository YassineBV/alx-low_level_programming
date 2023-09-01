#include<stdio.h>
#include <ctype.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *@argc:  program that adds positive numbers.
 *@argv:Print the result, followed by a new line
 *
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int sumof, i, j;

	sumof = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sumof += atoi(argv[i]);
		}

	printf("%d\n", sumof);

	}

	return (0);
}
