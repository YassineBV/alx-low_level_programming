#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n) in a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: Sum of all the data in the doubly linked list, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sums = 0;
	dlistint_t *travers;

	if (head == NULL)
		return (0);

	travers = head;
	sums += travers->n;
	while (travers->next != NULL)
	{
		travers = travers->next;
		sums += travers->n;
	}
	return (sums);
}
