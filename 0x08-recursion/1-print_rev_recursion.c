#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s--;
	_putchar(*s);
	_print_rev_recursion(s - 1);
}
