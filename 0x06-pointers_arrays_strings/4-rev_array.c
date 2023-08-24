#include "main.h"
/**
 * reverse_array - entry of the program
 *
 *@a: program that t reverses the content
 *@n: of an array of integers.
 *
 *Return: void
*/
void reverse_array(int *a, int n)
{
	int revtm, i, j;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		revtm = a[i];
		a[i] = a[j];
		a[j] = revtm;
	}
}

