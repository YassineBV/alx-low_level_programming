#include <unistd.h>
#include <string.h>
/**
 * main - entry of the program
 *
 *Description: program prints message to the standard error
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	const char *toerror = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, toerror, strlen(toerror));

	return (0);
}
