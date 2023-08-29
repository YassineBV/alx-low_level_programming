#include "main.h"
/**
 * print_chessboard - entry of the program
 *
 *@a: a function that prints the chessboard.
 *
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int len, wit;

	for (len = 0; len < 8; len++)
	{
		for (wit = 0; wit < 8; wit++)
		{
			printf("%c", a[len][wit]);
		}
		printf("\n");
	}

}


