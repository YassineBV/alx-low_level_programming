#include "lists.h"
/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if memory allocation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = *head;
	if (*head != NULL)
		(*head)->prev = new_nod;
	*head = new_nod;
	return (*head);
}
