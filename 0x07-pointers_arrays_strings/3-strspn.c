#include "main.h"
/**
 * _strspn - function gets the length of a prefix substring
 *
 *@s: Returns the number of bytes in the initial segment of s
 *@accept:  which consist only of bytes from accept
 *Return: Always 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	cont = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					cont++;
				}

				return (c);
			}
		}
	}

	return (0);
}
