#include "main.h"
/**
 * print_last_digit - entry of the program
 *
 *@l: program  prints the last digit of a number
 *
 *Return: Always 0 (success)
*/
int print_last_digit(int l)
{

	int ld = l % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + 48);
	return (ld);
}
