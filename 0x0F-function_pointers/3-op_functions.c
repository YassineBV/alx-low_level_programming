#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Function that adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of 'a' and 'b'.
 */
int op_add(int a, int b)
{

	return (a + b);
}
/**
 * op_sub - Function that subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting 'b' from 'a'.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function that multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of 'a' and 'b'.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function that divides two integers.
 * @a: The dividend.
 * @b: The divisor (must be non-zero).
 *
 * Return: The result of dividing 'a' by 'b'.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Calculate the remainder of dividing two integers.
 * @a: The dividend.
 * @b: The divisor (must be non-zero).
 *
 * Return: The remainder of dividing a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
