#include "main.h"
/**
 * add - entry of the program
 *
 *Description: program  adds two integers
 *
 *Return: Always 0 (success)
*/

int add(int a, int b)
{

	int a, b;
	int add;
	add = a +b;

		if (add <= 9)
		{
			_putchar(add + 48);
		}
		else(add > 9)
		{
			_putchar(add / 10 + 48);
			_putchar(add % 10 + 48);
		}
	return ('\n');
}
