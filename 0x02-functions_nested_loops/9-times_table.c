#include "main.h"
/**
 * times_table - entry of the program
 *
 *Description: program that prints a the 9 times table
 *
*/
void times_table(void)
{
	int i, j, pro;
	
	for (i = 0; i <= 9; i++)
	{

		_putchar(48);

		for (j = 1; j <= 9; j++)
		{

			_putchar(',');
			_putchar(' ');

			 pro = i * j;

			if (pro <= 9)
			{
				_putchar(' ');
				_putchar(pro + 48);

			}
			else 
			{
				_putchar(pro / 10 + 48);
				_putchar(pro % 10 + 48);
			}
		}

		_putchar('\n');

	}
}
