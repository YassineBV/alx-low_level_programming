#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: prints the first 50 Fibonacci numbers
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	long cr, prv, i, fib;

	cr = 2;
	prv = 1;

	printf("%ld, ", prv);
	printf("%ld", cr);

	for (i = 0; i < 48 ; i++)
	{
		fib = cr + prv;
		printf(", %ld", fib);
		prv = cr;
		cr = fib;
	}
	return (0);
}

