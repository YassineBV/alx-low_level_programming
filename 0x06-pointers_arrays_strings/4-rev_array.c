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
	int revtm;
	int j = n - 1;
	int i = 0;

	while (i < j)
	{
		i++;
		j--;
		revtm = a[i];
		a[i] = a[j];
		a[j] = revtm;
	}
}

