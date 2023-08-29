#include "main.h"
/**
 * print_number - entry of the program
 *
 *@n: function that prints an integer.
 *
 *Return: void:
*/
void print_number(int n)
{
	unsigned int nium;

	nium = n;

	if (n < 0)
	{
		_putchar('-');
		nium = -nium;
	}
	if (nium > 9)
	{
		print_number(nium / 10);
	}
	_putchar(nium % 10 + '0');
}
