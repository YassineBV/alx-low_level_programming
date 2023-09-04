#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 *
 *@s1: f NULL is passed, treat it as an empty string
 *@s2:The function should return NULL on failure
 *Return: pointer to concatstr
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *concatstr;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = strlen(s2);
	i = strlen(s1);

	concatstr = (char *)malloc((i + j) * sizeof(char) + 1);


	if (concatstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concatstr[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			concatstr[i + j] = s2[j];
		}
		concatstr[i + j] = '\0';

		return (concatstr);
	}
	return (concatstr);
}
