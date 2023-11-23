#include "main.h"

/**
 * print_binary - binary representation of a decimal number.
 * @n: The decimal number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	if (n > 1)
	{
		print_binary(n / 2);
		_putchar(n % 2 + 48);
	}


}
