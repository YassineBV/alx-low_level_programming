#include <stdio.h>
\**
 * main - entry of the program
 *
 *Description: print all possible combinations of two two-digit numbers
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	int mol1, mol2;

	for (mol1 = 0; mol1 <= 99; mol1++)
	{
		for (mol2 = mol1 + 1; mol2 <= 99; mol2++)
		{
			
			putchar('0' + mol1 / 10);
			putchar('0' + mol1 % 10);

			putchar('0' + mol2 / 10);
			putchar('0' + mol2 % 10);
			if (mol1 != 98 || mol2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
