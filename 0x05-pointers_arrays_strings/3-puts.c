#include "main.h"
/**
 * _puts - entry of the program
 *
 *@str: unction that prints a string, followed by a new line, 
 *
 *Return: void
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

