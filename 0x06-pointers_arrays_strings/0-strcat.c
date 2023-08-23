#include "main.h"
#include <stdio.h>
/**
 *_strcat - function that concatenates two strings
 *
 *@src: appends the src string
 *@dest: overwriting the terminating null byte
 *
 *Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int len, l;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	l = 0;

	while (src[l] != '\0')
	{
		l++;
		*dest = *src;
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
