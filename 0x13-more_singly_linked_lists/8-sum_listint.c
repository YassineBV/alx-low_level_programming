#include "lists.h"
#include "lists.h"

/**
 * sum_listint - Computes the sum of all (n) in a listint_t.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all integers (n). If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sumOf_n = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sumOf_n += head->n;
			head = head->next;
	    }
	}
	return (sumOf_n);
}
