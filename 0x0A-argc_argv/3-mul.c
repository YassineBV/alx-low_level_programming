#include<stdio.h>
# include <stdlib.h>
/**
 * main - entry of the program
 *
 *@argc: program that multiplies two numbers
 *@argv: print the result, followed by a new line
 *Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{

	unsigned int b1 = atoi(argv[1]);
	unsigned int b2 = atoi(argv[2]);

	unsigned int mulresult = b1 * b2;

	  if ( argc != 3)
        {
                printf("Error\n");
                return (1);
        }
	
	printf("%d\n", mulresult);

	return (0);
}
