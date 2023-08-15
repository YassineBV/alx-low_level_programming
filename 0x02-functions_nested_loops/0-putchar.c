#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints a string
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	char  char_string[] = "_putchar";
	int wr;

	for (wr = 0; wr < 8; wr++)
		_putchar(char_string[wr]);

	-putchar('\n');
	return (0);
}
