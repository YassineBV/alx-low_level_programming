#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
	
	*dest = &src;
	_putchar(*src);

	return (*dest);
}
