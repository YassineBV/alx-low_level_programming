#include "main.h"
/**
 * _strlen - entry of the program
 *
 *@s: function that returns the length of a string
 *
 *Return: Alway 0
*/
int _strlen(char *s)
{
	char *pr = s;
	while (*pr != '\0_)
	{
		pr++;
	}

	return (pr - s);
}
