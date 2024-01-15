#include "main.h"
/**
 * _strspn - entry of the program
 *
 *@s: Returns the number of bytes in the initial segment of s
 *@accept:  which consist only of bytes from accept
 *
 *Return: lenth lns
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lns, lnacc;

	for (lns = 0; s[lns] != '\0'; lns++)
	{

		for (lnacc = 0; accept[lnacc] != s[lns]; lnacc++)
		{
			if (accept[lnacc] == '\0')
				return (lns);
		}
	}
	return (lns);
}
