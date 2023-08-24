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
	int i, j;
	unsigned int comp = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				comp++;
				break;
			}
		}
		if (s1[j] == '\0')
			return (comp);
	}
	return (comp);
}


