#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
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

