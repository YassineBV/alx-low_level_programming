#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	char noeq;

	for (noeq = 'a'; noeq <= 'z'; noeq++)
	{
		if (noeq != 'e' && noeq != 'q')
		putchar(noeq);
	}
	putchar('\n');
	return (0);
}
