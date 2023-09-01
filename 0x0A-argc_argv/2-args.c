#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *@argc:  program that prints all arguments it receives
 *@argv: All arguments should be printed, including the first one
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
