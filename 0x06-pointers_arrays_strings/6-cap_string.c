#include "main.h"
#include <stdbool.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
char *cap_string(char *cap)
{
	bool capwrd = true;
	int i;

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (cap[i] == ',' || cap[i] == ';' || cap[i] == '.' || cap [i] == '!' || cap[i] == '?' || cap[i] == '"' || cap[i] == '(' || cap[i] == ')' || cap[i] == '{' || cap[i] == '}')
		{
			capwrd = true;
		}
		else if ((cap[i} >= 'a' && cap[i] <= 'z') || (cap[i] >= 'A' && cap[i] <= 'Z'))
		{
			if (capwrd)
			{
				cap[i] = cap[i] - 'a' + 'A';
				capwrd = false;
			}
		}
		return (cap);
}
