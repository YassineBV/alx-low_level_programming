#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lower_uppercase
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	char lowch = 'a';
	char upch = 'A';

	while (lowch <= 'z')
	{
		putchar(lowch);
		lowch++;
	}
	while (upch <= 'Z')
	{
		putchar(upch);
		upch++;
	}
	putchar('\n');
	return (0);
}
