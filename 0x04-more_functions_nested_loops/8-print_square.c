#include "main.h"
/**
 * print_square - a function that prints a square
 *
 *@size: followed by a new line.
 *
 *Return: void
*/
void print_square(int size)
{
	int rwr, clc;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (rwr = 0; rwr < size; rwr++)
		{
			for (clc = 0; clc < size; clc++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
}
