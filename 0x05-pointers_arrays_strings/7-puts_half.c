#include "main.h"
/**
 * puts_half - entry of the program
 *
 *@str: prints half of a string, followed by a new line
 *
 *Return: void
*/
void puts_half(char *str)
{
	int lnt, i, half;

	for (lnt = 0; str[lnt] != '\0'; lnt++)
		;
	half = lnt / 2;

	for (i = half; i < lnt; i++)
	{
		if (half % 2 == 0)
		{
		_putchar(str[i]);
		}
		else
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}

