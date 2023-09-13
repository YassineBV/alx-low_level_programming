#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fstnm, sctnm;
	int (*ptfnct)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fstnm = atoi(argv[1]);
	sctnm = atoi(argv[3]);

	ptfnct = get_op_func(argv[2]);

	if (ptfnct == NULL)
	{
		printf("Error\n");
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", ptfnct(fstnm, sctnm));

	return (0);
}
