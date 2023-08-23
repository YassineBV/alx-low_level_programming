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

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return dest;
}
