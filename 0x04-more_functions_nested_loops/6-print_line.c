#include "main.h"
/**
 * print_line - function that draws a straight line
 *
 *@n:  in the terminal.
 *
 *Return: void
*/
void print_line(int n)
{
	int vg;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (vg = 0; vg < n; vg++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
