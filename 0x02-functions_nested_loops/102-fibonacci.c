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
	int cr, prv, i, fib;
	cr = 1;
	prv = 0;

	printf ("%d, ", prv);
	printf("%d, ", cr);

	for (i = 0; i < 48 ;i++)
	{
		fib = cr + prv;
		printf("%d, ", fib);
		prv = cr;
		cr = fib;
	}
	return (0);
}

