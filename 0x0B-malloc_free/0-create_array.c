#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 *@size: the size of the memory to print
 *@c: and initializes it with a specific char
 *
 *Return: a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *buffer = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	buffer[0] = c;

	else
	{
	
		if (buffer == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				buffer[i] = c;
			}
			return (buffer);
		}
	}
	return (buffer);
}
