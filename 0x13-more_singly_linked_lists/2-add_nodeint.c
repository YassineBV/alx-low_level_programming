#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of the list.
 * @head: Pointer to a pointer that points to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr_toNod;

	ptr_toNod = malloc(sizeof(listint_t));

	if (ptr_toNod == NULL)
	{
		free(ptr_toNod);
		return (NULL);
	}
	ptr_toNod->n = n;
	ptr_toNod->next = *head;
	*head = ptr_toNod;

	return (ptr_toNod);
	free(ptr_toNod);

}
