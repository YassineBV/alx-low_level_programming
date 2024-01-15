#include "main.h"
/**
 * _strpbrk - entry of the program
 *
 *@s: function that searches a string
 *@accept:  for any of a set of bytes
 *
 *Return: pointer to the byte in s
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
		}
	}
	return (NULL);
}
