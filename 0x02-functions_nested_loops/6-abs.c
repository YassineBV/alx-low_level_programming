#include "main.h"
/**
 * _abs - entry of the program
 *
 *@int: program that computes the absolute value of an integer
 *
 *Return: Always 0 (success)
*/
void _abs(int i)
{
	int np;

	if (i > 0)
	{
		np = i - 0;
	}
       	else if (i < 0)
	{
		np = i * -1;
	}
	else 
	{
		np = 0;
	}

	_putchar(np + 48);
	_putchar('\n');
}

