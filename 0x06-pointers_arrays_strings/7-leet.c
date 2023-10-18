#include "main.h"
/**
 * leet - Encodes a string into 1337 language.
 *
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char leet[5] = "43071";
	char org[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == org[j][0] || s[i] == org[j][1])
			{
				s[i] = leet[j];
				break;
			}
		}

	}
	return (s);
}

