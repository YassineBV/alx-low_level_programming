#include "main.h"
/**
 * print_times_table - entry of the program
 *
 *@n: prints the n times table, starting with 0
 *
 * return: void
*/
void print_times_table(int n)
{
	int rs, num, mt;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mt = 1; mt <= n; mt++)
			{
				_putchar(',');
				_putchar(' ');

				rs = num * mt;

				if (rs <= 9)
					_putchar(' ');
				if (rs <= 99)
					_putchar(' ');
				if (rs >= 100)
				{
					_putchar((rs / 100) + 48);
					_putchar((rs / 10) % 10 + 48);
				}
				else if (rs <= 99 && rs >= 10)
					_putchar((rs / 10) + 48);
				_putchar((rs % 10) + 48);
			}
		_putchar('\n');
		}
	}
}
