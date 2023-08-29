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
	long long i, j;
	long long sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == size - 1)
			{
				sum += a[i * size + j];
			}
		}
	}
	printf("%lld, ", sum);
}
