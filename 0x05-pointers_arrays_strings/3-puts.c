#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
void _puts(char *str)
{

	if (*str != '\0')

		_putchar(*str + 97);
}

