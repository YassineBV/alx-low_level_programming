#include "main.h"
/**
 * add - entry of the program
 *
 *Description: program  adds two integers
 *
 *Return: Always 0 (success)
*/

int add(int, int)
{

	int a, b;
	int res;
	res = a +b;

		if (res <= 9)
		{
			_putchar(res + 48);
		}
		else(res > 9)
		{
			_putchar(res / 10 + 48);
			_putchar(res % 10 + 48);
		}
	return ('\n');
}
