#include "main.h"
/**
 * _strstr - function that locates a substring.
 *
 *@haystack: function function finds the first occurrence
 *@needle:  of the substring needle in the string haystack
 *
 *Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int ih, jn;


	for (ih = 0; haystack[ih] != '\0'; ih++)
	{
		if (haystack[ih] == needle[0])
		{
			char *po = &haystack[ih];
			{
				for (jn = 0; needle[jn] != '\0'; jn++)
				{
					if (haystack[ih + jn] != needle[jn])
					{
						break;
					}
				}

				if (needle[jn] == '\0')
				{
				return (po);
				}
			}
		}

	}
	return (NULL);
}
