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

	int x, y;
	int res;
	res = x + y;

		if (res <= 9)
		{
			_putchar(res + 48);
		}
		else
		{
			_putchar(res / 10 + 48);
			_putchar(res % 10 + 48);
		}
	return ('\n');
}
