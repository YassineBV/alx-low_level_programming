#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer
 *
 *@str: to a newly allocated space in memory
 *
 *Return: returns a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	unsigned int n;
	unsigned int i;
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		n = strlen(str) + 1;
		newstr = (char *)malloc(n * sizeof(char));
		if (newstr == NULL)
		{

			return (NULL);
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				newstr[i] = str[i];
			}

		}
		return (newstr);
	}

	return (newstr);
}
