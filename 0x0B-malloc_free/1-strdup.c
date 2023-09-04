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
	unsigned int n = strlen(str) + 1;
	unsigned int i;
	char *newstr = (char *)malloc(n * sizeof(char));

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	else
	{
		if (newstr == NULL)
		{
			printf("failed to allocate memory\n");
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
