#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
		printf("%d\n", i);
	(void)argv;
	return (0);
}

