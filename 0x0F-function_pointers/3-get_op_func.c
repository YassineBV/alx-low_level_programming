#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Get function pointer for an operator.
 * @s: Operator string.
 *
 * Return: Pointer to a function that performs the operation.
 */
int (*get_op_func(char *s))(int, int)
{
	  op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (*(ops[i]).f);
		}
		i++;

	}
	return (NULL);


}
