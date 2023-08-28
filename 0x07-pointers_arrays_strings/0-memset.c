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
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int hg;

	for (hg = 0; hg < n; hg++)
	{
		s[hg] = b;
	}

	return (s);
}
