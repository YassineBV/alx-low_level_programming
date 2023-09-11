#include <stdio.h>
/**
 * main - Entry point for the program.
 *
 * Description: This program prints the name of the source file using
 * __FILE__ macro.
 *
 * Return: Always 0 (success).
 */
int main()
{
	printf("Name of source file: %s\n", __FILE__);

	return 0;
}
