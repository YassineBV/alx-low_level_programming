#include <stdio.h>
/**
 * main - entry of the program
 *
 *Description: program prints all possible different combinations
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int ra1, ra2;
	for (ra1 = '0'; ra1 <= '9'; ra1++)

	{
		for (ra2 = '0'; ra2 <= '9'; ra2++)
		{
			if (ra1 != ra2 && ra1 < ra2)
			{
				putchar(ra1);
				putchar(ra2);
				if (ra1 != '8' || ra2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
