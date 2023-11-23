#include "main.h"

/**
 * print_binary - binary representation of a decimal number.
 * @n: The decimal number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int i, x;
	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	if (n > 1 && n < 128)
		for (i = 6; i >= 0; i-- )
	{
		x = n & (1 << i);
		if (x != 0)
		    x = 1;
		_putchar(x + 48);
	}
	if (n > 128 && n < 2048)
	{
		for (i = 10; i >= 0; i-- )
	    {
		    x = n & (1 << i);
		    if (x != 0)
		        x = 1;
		    _putchar(x + 48);

	    }
	}


}
