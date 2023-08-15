#include "main.h"
/**
 * _abs - entry of the program
 *
 *@t: program that computes the absolute value of an integer
 *
 *Return: Always 0 (success)
*/
int _abs(int t)
{

	if (t > 0)
		return (t);
	else
		return (t * -1);
}

