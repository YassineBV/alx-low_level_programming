#include <stdio.h>
/**
 * main - entry of the program
 *
 *Description: prints all combinations of single-digit numbers
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '0')
		{
			putchar(',');
			putchar(' ');
		}

		putchar(num);
	}

	putchar('\n');
	return (0);
}
