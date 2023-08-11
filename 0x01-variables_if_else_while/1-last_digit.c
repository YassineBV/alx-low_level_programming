#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - the entrey of the program
 *
 *Description: the last dijit of a number
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_dij;
	last_dij = n % 10;
	if (last_dij > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_dij);
	}
	else if (last_dij < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_dij);
	}
	else 
	{
		printf("Last digit of %d is %d and is 0", n, last_dij);
	}
	return (0);
}
