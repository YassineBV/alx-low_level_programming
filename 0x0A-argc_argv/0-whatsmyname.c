#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that  prints its nameits name
 *@argc:is greater than zero
 *@argv: pointers to strings
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
