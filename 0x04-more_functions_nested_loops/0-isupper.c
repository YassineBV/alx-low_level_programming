#include "main.h"
/**
 * _isupper - entry of the program
 *
 *@c: function that checks for uppercase character
 *
 *Return: Always 0 (success)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
