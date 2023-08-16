#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints a string
 *
 *Return: Always 0 (success)
*/
void times_table(void)
{
	int i, j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		
		_putchar(j + 48);
		_putchar("\n");
	}
}

