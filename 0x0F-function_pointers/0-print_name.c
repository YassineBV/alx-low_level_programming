#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to the name string
 * @f: Pointer to the function for printing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || f != NULL)
		f(name);
	
}
