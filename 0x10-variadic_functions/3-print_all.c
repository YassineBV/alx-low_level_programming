#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - Print values based on format.
 * @format: Format string for the values.
 * @...: Variable number of arguments.
 */
void print_all(const char * const format, ...)
{
	int h;
	int length = strlen(format);
	char *typ_str;
	char *separt = ", ";
	va_list type_ptr;

	h = 0;
	va_start(type_ptr, format);


	while (h <= length && format[h])
	{
		if (h == length - 1)
			separt = "";
		switch (format[h])
		{
		case 'c':
			printf("%c%s", va_arg(type_ptr, int), separt);
			break;
		case 'i':
			printf("%d%s", va_arg(type_ptr, int), separt);
			break;
		case 'f':
			printf("%f%s", va_arg(type_ptr, double), separt);
			break;
		case 's':
			typ_str = va_arg(type_ptr, char *);
			if (typ_str == NULL)
			{
				typ_str = "(nil)";
			}
			printf("%s%s", typ_str, separt);
			break;
		}
		h++;
	}
	printf("\n");

	va_end(type_ptr);

}
