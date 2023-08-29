#include "main.h"
/**
 * print_numbers - entry of the program
 *
 *Description:function that prints the numbers, from 0 to 9
 *
 *Return: void
*/
void print_numbers(void)
{
	int nmln;

	for (nmln = 0; nmln < 9; nmln++)
	{
		_putchar(nmln + 48);
	}
	_putchar('\n');
}
