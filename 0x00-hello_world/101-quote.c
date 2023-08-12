#include <unistd.h>
#include <string.h>
/**
 * main - entry of the program
 *
 *Description: program prints message to the standard error
 *
 *Return: Always 1 (error)
*/

int main(void)
{
	char bpl[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, bpl, 59);

	return (1);
}
