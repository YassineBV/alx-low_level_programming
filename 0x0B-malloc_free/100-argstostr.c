#include "main.h"
/**
 * argstostr - entry of the program
 *
 *@ac: function that concatenates
 *@av: all the arguments of your program
 *Return: a pointer to a new string
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int countav = 0;
	int strcount = 0;
	char *strij;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcount++;
		 strcount += strlen(av[i]);
	}
	strij = (char *)malloc(strcount + 1);
	if (strij == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, countav++)
		{
			strij[countav] = av[i][j];
		}
		strij[countav] = '\n';
		countav++;
	}
	return (strij);
}
