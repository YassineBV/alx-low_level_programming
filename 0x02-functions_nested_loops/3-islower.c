#include "main.h"
/**
 * _islower - entry of the program
 *
 *Description: program that checks for lowercase character
 *
 *@c: check the character
 *
 *Return: return 1 if c is lowercase
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	return (0);
}
