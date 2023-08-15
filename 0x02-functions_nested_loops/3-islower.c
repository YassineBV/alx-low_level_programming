#include "main.h"
/**
 * _islower - entry of the program
 *
 *Description: program that checks for lowercase character
 *
 *Return: Always 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else (c >= 65 || c <= 90)
	{
		return (0);
	}
}
