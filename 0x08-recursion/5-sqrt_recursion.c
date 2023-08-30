#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
int _sqrt_recursion(int n)
{
	if (n % n != n)
		return (1);
	return (_sqrt_recursion(n % n));
}
