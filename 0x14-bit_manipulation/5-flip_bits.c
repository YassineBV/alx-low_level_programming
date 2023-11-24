#include "main.h"
/**
 * flip_bits - Counts the number of differing bits between two integers.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that differ between the two integers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, i;
	int count = 0;

	x = sizeof(unsigned long int) * 8;

	for (i = 0; i < x; i++)
	{
		bool x = false;
		bool z = false;

		if (n & (1Ul << i))
			x = true;
		if (m & (1UL << i))
			z = true;
		if (z == false)
		{
			if (x == true)
				count++;
		}
		if (z == true)
		{
			if (x == false)
			{
				count++;
			}
		}

	}
	return (count);
}
