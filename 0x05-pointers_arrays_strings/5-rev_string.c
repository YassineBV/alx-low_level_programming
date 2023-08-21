#include "main.h"
/**
 * rev_string - entry of the program
 *
 *@s: reverses a string.
 *
 *Return: void 
*/
void rev_string(char *s)
{
	int i, lnt;

	char lnt;

	for (lnt = 0; s[lnt] != '\0'; lnt++)
		;

	for ( i = 0; i < lnt; i++)
	{
		s[i] = lnt;
		s[i] = s[-i -1];
		s[-i - 1] = lnt;
	}
}
