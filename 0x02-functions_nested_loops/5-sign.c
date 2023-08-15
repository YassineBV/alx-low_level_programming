#include "main.h"
/**
 * print_sign - entry of the program
 *
 *@n: program that prints the sign of a number
 *
 *Return: Always 0 (success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(',');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		_putchar(',');
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(',');
		return (-1);
	}
}

