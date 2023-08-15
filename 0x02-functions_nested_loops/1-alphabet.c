#include "main.h"
/**
 * print_alphabet - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
 */

 void print_alphabet(void)
{
	int alph = 'a';

	for (; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
}

