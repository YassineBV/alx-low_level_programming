#include "main.h"
/**
 * reset_to_98 - entry of the program
 *
 *@*n: updates the value it points to to 98
 *
 *Return: void
*/
void reset_to_98(int *n)
{
	int n = 402
	*n = &n;
	*n = 98;

_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
}
