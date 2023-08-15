#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that  prints 10 times the alphabet
 *
 *Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int rep;
	int abc;
	for (rep = 0; rep < 10; rep++)
	{
		for (abc = 0; abc < 26; abc++)
			_putchar(str[abc]);
		_putchar('\n');
	}
	_putchar('\n');
}
