#include "main.h"
#include <math.h>
int countbit(unsigned long int n);
/**
 * countbit - Counts the number of set bits.
 * @n: The unsigned long integer to count the bits in.
 *
 * Return: The number of set bits in the given unsigned long integer.
 */
int countbit(unsigned long int n)
{
	unsigned long int count;

	for (count = 0; n != 0; n >>= 1)
	{
		count++;
	}
	return (count);
}

/**
 * print_binary - binary representation of a decimal number.
 * @n: The decimal number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int x, f;
	int i;

	f = countbit(n);

	if (n == 0)
	{

		_putchar('0');
	}

	if (n > 0)
	{
		for (i = f - 1 ; i >= 0; i--)
		{
			x = n  & (1UL << i);
			if (x != 0)
			{
				_putchar('1');
			}
			else
			    _putchar('0');
		}
	}
}
