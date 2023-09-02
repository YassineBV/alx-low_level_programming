#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *@argc: program that prints the minimum number of coins
 *@argv: to make change for an amount of money
 *
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int coin, i, nmcoin;
	int countcoin = 0;
	int changr[] = {25, 10, 5, 2, 1};

	nmcoin = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	coin = atoi(argv[1]);

	if (coin < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (coin >= changr[i])
			{
				nmcoin = coin / changr[i];
				countcoin += nmcoin;
				coin -= nmcoin * changr[i];
			}
		}
		printf("%d\n", countcoin);
	}
	return (0);
}
