#include "main.h"
/**
 * print_diagsums - entry of the program
 *
 *@a: function that prints the sum of the two diagonals
 *@size: of a square matrix of integers.
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
	printf("\n");
}
