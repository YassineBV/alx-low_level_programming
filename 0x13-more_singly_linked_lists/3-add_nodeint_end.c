#include "lists.h"
/**
 * add_nodeint_end - Adds nodes at the end of a listint_t list.
 * @head: Pointer to a pointer that points to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_ptr;
	listint_t *moving_ptr;

	end_ptr = malloc(sizeof(listint_t));

	if (end_ptr == NULL)
	{
		free(end_ptr);
		return (NULL);
	}
	end_ptr->n = n;
	end_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = end_ptr;
		return (end_ptr);
	}

	moving_ptr = *head;

	while (moving_ptr != NULL)
	{
		if (moving_ptr->next == NULL)
		{
			moving_ptr->next = end_ptr;
			break;
		}
		moving_ptr = moving_ptr->next;
	}
	return (end_ptr);
}
