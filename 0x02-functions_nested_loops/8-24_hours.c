#include "main.h"
/**
 * jack_bauer - entry of the program
 *
 *Description: program that prints every minute of the day
 *
 *Return: Always 0 (success)
*/
void jack_bauer(void)
{
	int td1, td2;

	for (td1 = 0; td1 < 24; td1++)
	{
		for (td2 = 0; td2 < 60 ; td2++)
		{
			_putchar(td1 / 10 + 48);
			_putchar(td1 % 10 + 48);
			_putchar(':');
			_putchar(td2 / 10 + 48);
			_putchar(td2 % 10 + 48);
			_putchar('\n');
		}
	}

}


