#include "main.h"
/**
 * print_array - entry of the program
 *
 *@a: prints n elements of an array of integers
 *@n: number of elements of the array 
 *
 *Return: Always 0 (success)
*/
void print_array(int *a, int n)
{

	for (n = 0; a[n] < '\0'; n++)
	{
		printf("%d, ", a[n]);
	}
}
