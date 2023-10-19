#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int tpm;
	int pw;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	tpm = n;
	pw = 1;

	while (tpm > 9)
	{
		pw = pw * 10;
		tpm = tpm / 10;
	}
	while (pw > 0)
	{
		tpm = n / pw;
		_putchar(tpm + 48);
		n = n - (tpm * pw);
		pw = pw / 10;
	}

}

