#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * count_words - counts the number of words in a string
 * @str: the input string
 * Return: the number of words
 */
int count_words(char *str)
{
	int i, len, count;

	len = strlen(str);
	count = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the input string
 * Return: a pointer to an array of words
 */
char **strtow(char *str)
{
	int i, j, k, count, len;
	char **words;

	if (str == NULL || *str == '\0' || count_words(str) == 0)
	{
		return (NULL);
	}

	count = count_words(str);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < count; i++)
	{
		len = 0;
		while (isspace(str[k]))
			k++;
		while (!isspace(str[k + len]) && str[k + len])
			len++;
		words[i] = malloc(len + 1);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++)
			words[i][j] = str[k++];
		words[i][len] = '\0';
	}
	words[count] = NULL;
	return (words);
}
