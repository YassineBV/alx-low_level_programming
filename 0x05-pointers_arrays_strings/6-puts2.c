#include "main.h"
/**
 * puts2 - entry of the program
 *
 *@str: program prints every other character of a string
 *
 *Return: Always 0 (success)
*/
void puts2(char *str)
{
	int i = 0;
	
	_putchar(str[i]);
	
	for (i = 1; str[i] != '\0'; i++)
	{
		_putchar(str[i + 1]);
	}
	_putchar('\n');
}
