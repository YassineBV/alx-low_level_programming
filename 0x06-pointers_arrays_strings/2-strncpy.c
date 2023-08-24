#include "main.h"
/**
 * _strncpy - entry of the program
 *
 *@dest: program that copies a string.
 *@src: function should work exactly like strncpy
 *@n: will use at most n bytes from src
 *
 *Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
