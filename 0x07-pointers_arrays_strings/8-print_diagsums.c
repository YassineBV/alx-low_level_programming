#include "main.h"
/**
 * _memset - entry of the program
 *
 *@s: function that fills memory with a constant byte.
 *@b: constant byte
 *@n: n bytes
 *
 *Return:  pointer to the memory area s
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i*size + j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i*size + j];
			}
		}
	}
	printf("%d, ", sum1);
	printf("%d", sum2);
}
