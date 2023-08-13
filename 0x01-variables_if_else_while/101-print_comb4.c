#include <stdio.h
/**
 * main - entry of the program
 *
 *Description: program prints  different combinations of three digits
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int opl1, opl2, opl3;

	for (opl1 = '0'; opl1 <= '9'; opl1++)
	{
		for (opl2 = '0'; opl2 <= '9'; opl2++)
		{
			for (opl3 = '0'; opl3 <= '9'; opl3++)
			{
				if (opl1 < opl2 && opl2 < opl3 && opl1 != opl2 && opl2 != opl3)
				{
					putchar(opl1);
					putchar(opl2);
					putchar(opl3);
				if (opl1 != '7' || opl2 != '8' || opl3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
