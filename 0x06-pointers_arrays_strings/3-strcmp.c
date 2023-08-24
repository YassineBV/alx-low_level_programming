#include "main.h"
/**
 * _strcmp - entry of the program
 *
 *@s1: program  function that compares two strings
 *@s2: function should work exactly like strcmp
 *
 *Return: comparison result
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] < s2[j])
			return (-1);
		else if (s1[i] > s2[j])
			return (1);
		i++;
		j++;
	}
	if (s1[i] == '\0' && s2[j] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
