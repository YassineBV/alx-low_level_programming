#include "main.h"
/**
 * _memset - entry of the program
 *
 *@s: function that fills memory with a constant byte.
 *@b: constant byte
 *@n: n bytes
 *
 *Return:  pointer to the memory area s
 */
void print_chessboard(char (*a)[8])
{
	int len, wit;

	for (len = 0; len < 8; len++)
	{
		for (wit = 0; wit < 8; wit++)
		{
			_putchar(a[len][wit]);
			if (len == 8)
				_putchar('\n');
		}
	}
}


