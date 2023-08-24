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
	int i, revtm;

	for (i = 0; i <=  n/2; i++)
	{
		revtm = a[i]
		a[i] = a[n - i - 1];
		a[n - i - 1] = revtm
	}
}

