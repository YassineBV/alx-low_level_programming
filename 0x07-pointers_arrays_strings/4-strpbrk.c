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
char *_strpbrk(char *s, char *accept)
{
	int is, ja;

	for (is = 0; s[is] != '\0'; is++)
	{
		for (ja = 0; accept[ja] != '\0'; ja++)
		{
			if (s[is] == accept[ja])
				return (s + is);
			else
				return (NULL);
		}
	}
	return (s +is);
}
