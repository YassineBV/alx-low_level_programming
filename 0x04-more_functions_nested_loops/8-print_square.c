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

	for (rwr = 1; rwr <= size; rwr++)
	{
		for (clc = 1; clc <= size; clc++)
			_putchar('#');
		_putchar('\n');
	}
}
