#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1 [i] != '\0' && s2[i] != '\0'; i++)
		{
			s1++;
			s2++;
		}
	int comp = _strcmp(s1[i],s2[i]);
	
	if (comp == 0)

	{
		return (0);
	}
	else if (comp > 0)
	{
		return (15);
	}
	else 
		return (-15);
}


