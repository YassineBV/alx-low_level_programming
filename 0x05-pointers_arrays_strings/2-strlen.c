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
	int pr;

	for (pr = 0; s != '\0'; s++)
		pr++;

	return (pr);
}
