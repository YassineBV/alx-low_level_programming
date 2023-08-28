#include "main.h"
/**
 * _strspn - entry of the program
 *
 *@s: Returns the number of bytes in the initial segment of s
 *@accept:  which consist only of bytes from accept
 *
 *Return: lenth cont
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int cont = 0;

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
				else
					return (cont);

			}
		}
	}

	return (cont);
}
