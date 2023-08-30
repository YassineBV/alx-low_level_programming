#include "main.h"
/**
 * _pow_recursion - entry of the program
 *
 *@x: function that returns the value of x
 *@y: raised to the power of y
 *
 *Return: returns  the power value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
