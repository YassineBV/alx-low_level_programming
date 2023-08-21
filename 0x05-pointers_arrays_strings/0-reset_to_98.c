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
	int o = 402
	n = &o;
	*n = 98;

_putchar(o / 10 + 48);
_putchar(o % 10 + 48);
}
