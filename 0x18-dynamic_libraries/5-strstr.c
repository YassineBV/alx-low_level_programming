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
	int ih;
	int jn = 0;


	while (needle[jn] != '\0')
		jn++;
	while (*haystack)
	{
		for (ih = 0; needle[ih]; ih++)
		{
			if (haystack[ih] != needle[ih])
				break;
		}
		if (ih != jn)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

