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
		_islower(1);
	}
	else if  (c >= 65 || c <= 90)

	_islower(0);
	return (0);
}
