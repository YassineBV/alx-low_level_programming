#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print numbers separated by a separator.
 * @separator: The string separator.
 * @n: The number of integers to print.
 * @...: Variable number of integers to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num_lst;

	va_start(num_lst, n);

	for (i = 0; i < n; i++)
	{

		int num_i = va_arg(num_lst, unsigned int);

		printf("%d", num_i);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}

	}
	printf("\n");
	va_end(num_lst);


}
