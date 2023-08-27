#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: prints the first 98 Fibonacci numbers
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	long prv = 1;
	long cur = 2;

	printf("%ld, ", prv);
	printf("%ld", cur);
	 
	long fl = 0;

	int i;

	for (i = 0; i < 96; i++)
	{
		fl = cur + prv;
		printf(", %ld", fl);
		prv = cur;
		cur = fl;
	}

	return (0);
}

