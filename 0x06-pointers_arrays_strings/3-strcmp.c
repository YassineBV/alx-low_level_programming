#include "main.h"
/**
 * _strcmp - entry of the program
 *
 *@s1: program  function that compares two strings
 *@s2: function should work exactly like strcmp
 *
 *Return: comparison result
*/
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 != 0)
	{
		if (*s1 != *s2)
		{
			comp = ((int)*s1 - 48) - (int)*s2 - 48);
			break;
		}
	*s1++;
	*s2++;
	}
	return (comp);
}


