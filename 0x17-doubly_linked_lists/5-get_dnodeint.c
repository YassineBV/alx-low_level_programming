#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at a specified index.
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the desired node (starting from 0)
 *
 * Return: Pointer to the node at the specified index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
