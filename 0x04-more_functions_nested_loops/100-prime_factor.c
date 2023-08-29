#include "main.h"
/**
 * main -  finds and prints the largest prime
 *
 *Description: factor of the number 612852475143
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int cn;
	long anubm = 612852475143;

	while (cn++ < anubm / 2)
	{
		if (anubm % cn == 0)
		{
			anubm /= 2;
			continue;
		}
		for (cn = 3; cn < anubm / 2; cn += 2)
		{
			if (anubm % cn == 0)
				anubm /= cn;
		}
	}
	printf("%ld\n", anubm);
	return (0);
}
