#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
char **strtow(char *str)
{
	int i, j, k, lentstr; 
	char **wordstr;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	lentstr = strlen(str);

	wordstr = (char **)malloc(lentstr *sizeof(char *) + 1);
		k = 0;
		if (wordstr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < lentstr; i++)
		{
			for (j = 0; j < i; j++)
			{
				while (str[k] != ' ' && str[k] != '\0')
				{
					wordstr[i][j] = str[k];
				}
			}
			
			{
				wordstr[i][j] = '\0';
			}
			return (wordstr);

		}
	
	return (wordstr);
}