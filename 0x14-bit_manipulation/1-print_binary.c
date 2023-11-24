#include "main.h"
#include <math.h>
int countbit(unsigned long int n);
int countbit(unsigned long int n)
{
	int count;

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
	int i, x, f;

	f = countbit(n);

	if (n == 0)
	{

		_putchar('0');
	}

	if (n > 0)
	{
		for (i = f - 1 ; i >= 0; i--)
		{
			x = n  & (1 << i);
			if (x != 0)
			{
				x = 1;
			}
			_putchar(x + 48);
		}
	}
}
