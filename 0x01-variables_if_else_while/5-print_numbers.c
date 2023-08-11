#include <stdio.h>
/**
 * main - entry of the program
 *
 *Description: program that prints all single digit numbers
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int raem = '0';

	for (; raem <= '9'; raem++)
	printf("%c", raem);

	putchar('\n')
	return (0);
}
