#include "lists.h"
/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *travrs_ptr1 = NULL, *travrs_ptr2 = NULL;

	if (*head == NULL)
		return (NULL);
	else
	{
		while (*head != NULL)
		{
			travrs_ptr1 = (*head)->next;
			(*head)->next = travrs_ptr2;
			travrs_ptr2 = *head;
			*head = travrs_ptr1;

		}
		*head = travrs_ptr2;
	}
	return (*head);
}
