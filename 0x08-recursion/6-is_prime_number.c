#include "main.h"
/**
 * main - entry of the program
 *
 *Description: program that prints the alphabet in lowercase
 *
 *Return: Always 0 (success)
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (chprm(int n, 2));

int chprm(int n, int dvt)
{
	if (dvt * dvt > n)
		return (1);
	else if (n % dvt == 0)
		return (0);
	else 
		return (chprm(n, dvt + 1));
}
