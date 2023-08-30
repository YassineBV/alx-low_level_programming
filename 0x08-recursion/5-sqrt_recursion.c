#include "main.h"
/**
 * sqwern - If n does not have a natural square root
 *
 *@g: number with a natural square root
 *@l:possible natural square root
 *Return: Always 0 (success)
*/
int sqwern(int g, int l)
{

	if (l * l == g)
		return (l);
	else if (l * l > g)
		return (-1);
	return (sqwern(g, l + 1));

}
/**
 * _sqrt_recursion - unction that returns
 *
 *@n: the natural square root of a number.
 *
 *Return: recursive function sqwern.
*/
int _sqrt_recursion(int n)
{
	return (sqwern(g, 1));
}
