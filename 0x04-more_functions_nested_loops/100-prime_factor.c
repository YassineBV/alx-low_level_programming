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
	long long dnu, dmx;
	long long anubm = 612852475143;

	double sqo = sqrt(anubm);

	for (dnu = 1; dnu <= sqo; dnu++)
	{
		if (anubm % dnu == 0)
		{
			dmx = anubm / dnu;
		}
	}

	printf("%lld\n", dmx);
	return (0);
}
