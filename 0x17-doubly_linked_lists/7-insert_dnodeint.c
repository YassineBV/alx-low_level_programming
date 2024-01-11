#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a specific index.
 * @h: Pointer to a pointer to the head of the doubly linked list
 * @idx: Index at which the new node should be inserted (starting from 0)
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *my_node, *temp;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	my_node = malloc(sizeof(dlistint_t));
	if (my_node == NULL)
		return (NULL);
	temp = *h;
	my_node->prev = NULL;
	my_node->n = n;
	my_node->next = NULL;
	while (temp != NULL)
	{
		if (idx == 0)
		{
			my_node->next = temp;
			my_node->prev = NULL;
			*h = my_node;

			return (my_node);
		}
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				my_node->next = NULL;
			else
				my_node->next = temp->next;
			temp->next = my_node;
			my_node->prev = temp;
			return (my_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);

}
