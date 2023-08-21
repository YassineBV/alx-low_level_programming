#include "main.h"
/**
 * swap_int - entry of the program
 *
 *@a: program  swaps the values of two integers
 @b:  swaps the values of two integers
 *
 *Return: void
*
*/
void swap_int(int *a, int *b)
{
	int tr;
	tr = *a;
	*a = *b;
	*b = tr;
}
