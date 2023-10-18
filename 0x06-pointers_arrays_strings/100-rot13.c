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
	char toro[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ro13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (i = 0; ui[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (ui[i] == toro[j])
			{
				ui[i] = ro13[j];
				break;
			}
		}
	}
	return (ui);


}
