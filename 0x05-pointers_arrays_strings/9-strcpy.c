#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
char *_strcpy(char *dest, char *src)
{
	int i, lnt;

	for (lnt = 0; lnt != '\0'; lnt++)
		;

	for (i = -1; src[i] <= lnt; i++)

		dest[i] = src[i];

	return (dest);
}
