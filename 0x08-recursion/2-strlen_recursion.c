#include "main.h"
/**
 * _strlen_recursion - entry of the program
 *
 *@s:  function that returns the length of a string
 *
 *Return: returns the length of a string
*/
int _strlen_recursion(char *s)
{
	int lentk = 0;

	if (*s == '\0')
		return (0);
	lentk++;
	lentk += _strlen_recursion(s + 1);

	return (lentk);
}
