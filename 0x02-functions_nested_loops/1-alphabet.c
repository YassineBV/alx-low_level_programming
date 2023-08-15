#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char alph = 'a';

	for (; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
	return (0);
}

