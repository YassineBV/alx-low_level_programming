#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: prints the sum of multiples of 3 or 5 below 1024
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int x;
	int sm = 0;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sm  += x;
		}
	}

	printf("%d\n", sm);

	return (0);
}
