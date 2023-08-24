#include "main.h"
/**
 * string_toupper - entry of the program
 *
 *@m:changes all lowercase letters of a string to uppercase
 *
 *Return: pointer to m
*/
char *string_toupper(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] > 'a' && m[i] <= 'z'])
			m[i] = (int)m[i] - 32;
	}
	return (m);
}
