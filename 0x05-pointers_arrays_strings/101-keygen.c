#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry of the program
 *
 *Description: program that generates random valid passwords
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int eqal;
	char m;

	srand(time(NULL));
	eqal = 0;
	while (eqal <= 2645);
	{
		m = rand() % 128;
		eqal += m;
		putchar(m);
	}
	putchar(2772 - eqal);

	return (0);
}
