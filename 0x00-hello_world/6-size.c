#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of the program
 *
 *Description: program that print size of
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
