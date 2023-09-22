#include <stdio.h>
/**
 * print_me_first - function that prints a message.
 *
 * This function is executed before the main function when
 * the program starts.
 */
void __attribute__ ((constructor)) print_me_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
