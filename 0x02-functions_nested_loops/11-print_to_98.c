#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry of the program
 *
 *@n: prints all natural numbers from n to 98
 *
*/
void print_to_98(int n)
{
	int y;

	if (n > 98)
	{
		for (y = n; y >= 98; y--)
		{
			printf("%d", y);
			if (y != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (y = n; y <= 98; y++)
		{
			printf("%d", y);
			if (y != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
