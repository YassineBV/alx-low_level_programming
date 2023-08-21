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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
