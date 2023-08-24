#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int lend, i;

	lend = 0;
	while (dest[lend])
		lend++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lend] = src [i];
		for ( ; i < n; i++)
		       dest[i] = '\0';
	}
return (dest);
}
