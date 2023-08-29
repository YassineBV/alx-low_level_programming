#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 *@size: followed by a new line.
 *
 *Return: void
*/
void print_triangle(int size)
{
	int ra, rb, rc;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ra 0; ra < size; ra++)
		{
			for (rb = size - ra; rb > 1; rb--)
			{
				_putchar(32);
			}
			for (rc = 0; rc <= ra; rc++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
