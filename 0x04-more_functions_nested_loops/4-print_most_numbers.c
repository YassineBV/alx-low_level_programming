#include "main.h"
/**
 * print_most_numbers - function that prints the numbers
 *
 *Description: 0 to 9, followed by a new line.
 *
 *Return: void
*/
void print_most_numbers(void)
{
	int exl;

	for (exl = 0; exl <= 9; exl++)
	{
		if (exl == 2 || exl == 4)
			continue;
		_putchar(exl + 48);
	}
	_putchar('\n');
}
