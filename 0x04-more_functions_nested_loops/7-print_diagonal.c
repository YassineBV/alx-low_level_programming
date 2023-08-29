#include "main.h"
/**
 * print_diagonal - entry of the program
 *
 *@n: unction that draws a diagonal line on the terminal
 *
 *Return: void
*/
void print_diagonal(int n)
{
	int rmg, stp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (rmg = 0; rmg < n; rmg++)
		{
			for (stp = 1; stp <= rmg; stp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
