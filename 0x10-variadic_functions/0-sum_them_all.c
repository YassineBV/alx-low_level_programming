#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Calculate the sum of integers
 * @n: Number of integers
 * @...: Variable number of integers
 *
 * Return: Sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int fsum = 0;
	va_list sum_pt;

	if (n == 0)
		return (0);


	va_start(sum_pt, n);

	for (i = 0; i < n; i++)
	{
		int num1 = va_arg(sum_pt, unsigned int);

		fsum += num1;
		if (num1 < 0)
		{
			num1--;
		}


	}

	va_end(sum_pt);

	return (fsum);


}
