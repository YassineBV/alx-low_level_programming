#include "main.h"
/**
 * chprm - entry of the program
 *
 *@n: function check if integer is a prime number,
 *@dvt:  returns 1 if the input integer is a prime number
 *Return: otherwise return 0
*/
int chprm(int n, int dvt)
{
	if (dvt * dvt > n)
		return (1);
	else if (n % dvt == 0)
		return (0);
	else
		return (chprm(n, dvt + 1));
}
/**
 * is_prime_number - entry of the program
 *
 *@n: prime number function Prototype
 *
 *Return: Recursion to chprmt otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (chprm(n, 2));
}
