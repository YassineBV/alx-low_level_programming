#include <stdio.h>
#include "main.h"
/**
 * _memset - entry of the program
 *
 *@s: function that fills memory with a constant byte.
 *@b: constant byte
 *@n: n bytes 
 *Return:  pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
