#include <stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - number stored in the variable n is positive or negative
 *
 *Description: his program assign a random number to the variable n
 *
 * return : Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
