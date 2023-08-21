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
	int b = 0;
	while (s[b] != '\0')
		b++;
	while (b--)
		_putchar(s[b]);
	_putchar('\n');
}

