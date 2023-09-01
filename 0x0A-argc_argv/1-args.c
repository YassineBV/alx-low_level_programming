#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *@argc: program prints the number of arguments passed into it
 *@argv: program should print a number, followed by a new line
 *
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i = -1;

	if (i < argc)
	{
		i = argc + i;
	}
	printf("%d\n", i);
	(void)argv;
	return (0);
}
