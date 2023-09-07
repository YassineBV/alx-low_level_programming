#include "main.h"
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int lents1, lents2;
	char * concat;

	if (s1 == NULL)
	    s1 = "";
	if (s2 == NULL)
	    s2 = "";

	lents1 = strlen(s1);
	lents2 = strlen(s2);

	if (n >= lents2)
		n = lents2;

	
	concat = (char *)malloc(n + lents1 + 1);

	if (concat == NULL)
	    return (NULL);
	
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';

	return (concat);
}