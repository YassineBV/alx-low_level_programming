#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, *temp;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->prev = NULL;
	new_end->n = n;
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_end;
	new_end->prev = temp;
	return (*head);
}
