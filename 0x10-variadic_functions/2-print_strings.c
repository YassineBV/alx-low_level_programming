#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Print strings separated by a separator.
 * @separator: String separator.
 * @n: Number of strings to print.
 * @...: Variable number of string arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str_ptr;

	va_start(str_ptr, n);

	if (str_ptr == NULL)
			printf("nil");

	for (i = 0; i < n; i++)
	{
	

		char *str_char = va_arg(str_ptr, char *);

		

		printf("%s", str_char);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}

	}
	va_end(str_ptr);
	printf("\n");
}
