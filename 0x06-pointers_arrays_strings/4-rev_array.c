#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
void reverse_array(int *a, int n)
{
	int revtm, i, j;

	for (i = 0, j = (n -1); i < j; i++, j--)
	{
		revtm = a[i]
		a[i] = a[j];
		a[j] = revtm;
	}
}

