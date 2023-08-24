#include "main.h"
/**
 * _strncat - entry of the program
 *
 *@dest:  concatenates two strings.
 *@src: use at most n bytes from src
 *
 *Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len2;

	len2 = 0;
	while (dest[len2])
	{
		len2++;
	}
	n = 0;

	for (i = 0; src[i] <= n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}

	dest[len2] = '\0';
	return (dest);
}


