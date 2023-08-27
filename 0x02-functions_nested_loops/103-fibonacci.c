#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	long pr = 1;
	long cur = 2;

	long evsm, sum;

	while (cur <= 4000000)
	{
		if (cur % 2 == 0)
		{
			sum += cur;
		}
		evsm = cur + pr;

		pr = cur;
		cur = evsm;
	}
	printf("%ld", sum);

	printf("\n");
}

