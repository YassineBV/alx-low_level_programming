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
	int i, j, k, lentstr, countwrd, wordlent;
	char **wordstr;
	lentstr = strlen(str);
	countwrd = 0;
	k = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}



	for (i = 0; i < lentstr; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			countwrd++;
		}
	}
	if (countwrd == 0)
	{
		return (NULL);
	}
	wordstr = (char **)malloc((countwrd + 1) * sizeof(char **));

	if (wordstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < countwrd; i++)
	{
		wordlent = 0;
		while (str[k] == ' ')
		{
			k++;
		}
		while (str[k + wordlent] != ' ' && str[k + wordlent] != '\0')
		{
			wordlent++;
			}
			wordstr[i] = (char *)malloc(wordlent + 1);
			
			if (wordstr[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(wordstr[j]);
				}
				free(wordstr);
				return (NULL);
			}
			for (j = 0; j < wordlent; j++)
			{
				wordstr[i][j] = str[k];
				k++;
			}
			wordstr[i][wordlent] = '\0';
	}
	wordstr[countwrd] = NULL;
	return (wordstr);
}
