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
	char *str_char;


	va_list str_ptr;

	va_start(str_ptr, n);

	
	printf("%s", va_arg(str_ptr, char *));

	
		
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			    {
				    printf("%s", separator);
			    }
		str_char = va_arg(str_ptr, char *);
		{
		
		    if (str_char == NULL)
			    printf("nil");

		    else
		        printf("%s", str_char);

		   
		}

	}
	
	va_end(str_ptr);
	printf("\n");
}
