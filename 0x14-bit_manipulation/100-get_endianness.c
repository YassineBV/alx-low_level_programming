#include "main.h"
/**
 * get_endianness - Checks the endianness
 *
 * Description: whether the system is Little Endian or Big Endian.
 *
 * Return: 1 if Little Endian, 0 if Big Endian
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *j = (char *) &l;

	if (*j)
		return (1);
	else
		return (0);
}
