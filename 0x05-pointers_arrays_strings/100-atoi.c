#include "main.h"
/**
 * _atoi - entry of the program
 *
 *@s: function that convert a string to an integer.
 *
 *Return: Always 0 (success)
*/
int _atoi(char *s)
{
	int po = 1;
	int ng = 0;

	do
	{
		if (*s == '-')
			po *= -1;
		else if (*s >= '0' && *s <= '9')
			ng = (ng * 10) + (*s - '0');
		else if (ng > 0)
			break;
	}
	while (*s++);

	return (po * ng);
}

