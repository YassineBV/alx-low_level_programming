#include "main.h"
/**
 * rot13 - Applies ROT13 encryption to string.
 *
 * @ui: The input string to be encrypted using ROT13.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *ui)
{
	int i, j;
	char toro[26][2] = {
		{'a', 'A'}, {'b', 'B'}, {'c', 'C'}, {'d', 'D'}, {'e', 'E'},
		{'f', 'F'}, {'g', 'G'}, {'h', 'H'}, {'i', 'I'}, {'j', 'J'},
		{'k', 'K'}, {'l', 'L'}, {'m', 'M'}, {'n', 'N'}, {'o', 'O'},
		{'p', 'P'}, {'q', 'Q'}, {'r', 'R'}, {'s', 'S'}, {'t', 'T'},
		{'u', 'U'}, {'v', 'V'}, {'w', 'W'}, {'x', 'X'}, {'y', 'Y'},
		{'z', 'Z'}
	};
	char ro13[26][2] = {
		{'N', 'n'}, {'O', 'o'}, {'P', 'p'}, {'Q', 'q'}, {'R', 'r'},
		{'S', 's'}, {'T', 't'}, {'U', 'u'}, {'V', 'v'}, {'W', 'w'},
		{'X', 'x'}, {'Y', 'y'}, {'Z', 'z'}, {'A', 'a'}, {'B', 'b'},
		{'C', 'c'}, {'D', 'd'}, {'E', 'e'}, {'F', 'f'}, {'G', 'g'},
		{'H', 'h'}, {'I', 'i'}, {'J', 'j'}, {'K', 'k'}, {'L', 'l'},
		{'M', 'm'}
	};

	for (i = 0; ui[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (ui[i] == toro[j][0] || ui[i] == toro[j][1])
			{
				ui[i] = (ui[i] ==  toro[j][0]) ? ro13[j][1] : ro13[j][0];
				break;
			}
		}
	}
	return (ui);


}
