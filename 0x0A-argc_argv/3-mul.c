#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *@argc: program that multiplies two numbers
 *@argv: print the result, followed by a new line
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	unsigned int i, mulresult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mulresult = 1;

		for (i = 1; i < 3; i++)
			mulresult *= atoi(argv[i]);

		printf("%d\n", mulresult);
	}

	return (0);
}
