#include "lists.h"
/**
 * dlistint_len - return  elements of a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: Number of nodes in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elm = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		elm++;
	}

	return (elm);

}
