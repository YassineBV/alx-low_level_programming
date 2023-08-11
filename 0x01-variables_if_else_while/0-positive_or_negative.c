#include <stdlib.h>
#include<time.h>
#include<stdio.h>
/*
 * main - program  print whether the number stored in the variable n is positive or negative.
 *
 * return : Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("n: is positive\n");
	}
	else if (n < 0)
	{
		printf("n: is positive\n");
	}
	else
	{
		printf("n: is zero\n");
	}

	return (0);
}
