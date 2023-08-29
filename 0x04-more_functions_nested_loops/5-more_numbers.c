#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 *
 *Description: from 0 to 14, followed by a new line.
 *
 *Return: void
*/
void more_numbers(void)
{
	int ij, kl;

	for (ij = 0; ij <= 9; ij++)
	{
		for (kl = 0; kl < 15; kl++)
		{
			if (kl > 9)
			{
				_putchar((kl / 10) + 48);
			}
			_putchar(kl % 10) + 48);
		}
		_putchar('\n');
	}
}

