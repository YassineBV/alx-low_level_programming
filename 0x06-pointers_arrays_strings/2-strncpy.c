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

		while (i < 98)
		{
			i++;
			if ( i % 10)
			{
				_putchar(' ');
			}
			if (!(i % 10) && i)
			{
				_putchar('\n');
			}


		       dest[i] = '\0';
	}
return (dest);
}
