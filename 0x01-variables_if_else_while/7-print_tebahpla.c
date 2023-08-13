#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the lowercase alphabet in reverse
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	char ubi = 'z';
	while (ubi >= 'a')
	{
		putchar(ubi);
		ubi--;
	}
	putchar('\n');
		return (0);
}
