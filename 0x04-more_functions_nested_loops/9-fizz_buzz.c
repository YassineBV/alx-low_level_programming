#include "main.h"
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the numbers from 1 to 100
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int nom;

	for (nom = 1; nom <= 100; nom++)
	{
		if ((nom % 5 == 0) && (nom % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (nom % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nom % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", nom);
		}
		if (nom != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
