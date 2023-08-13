#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: prints all single digit numbers of base 10 starting from 0
 *
 *Return: Always 0 (success)
*/

int main(void)
{
	int kol = '0';

	while (kol <= '9')
	{
	putchar(kol);
	kol++;
	}
	putchar('\n');
	return (0);
}



