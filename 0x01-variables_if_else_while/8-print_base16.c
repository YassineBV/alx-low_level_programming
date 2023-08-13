#include <stdio.h>
/**
 * main - entry of the program
 *
 *Description: program that prints all the numbers of base 16
 *
 *Return: Always 0 (success)
*/
int main(void)
{
        int num;

	for (num = 0; num <=15; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('a' + (num -10));
		}
	}
	putchar('\n');
		return (0);
}
