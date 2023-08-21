#include "main.h"
/**
 * print_rev - entry of the program
 *
 *@s: program prints prints a string, in reverse
 *
 *Return: void
*/
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 1);
		s--;
	}
	_putchar('\n');
}

