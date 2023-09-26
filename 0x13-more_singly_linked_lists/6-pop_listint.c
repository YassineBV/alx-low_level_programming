#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) of the deleted head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *delit_ptr;
	int head_N = 0;

	delit_ptr = *head;


	if (head == NULL)
	{
		return (0);
	}
	else
	{
		if (*head != NULL)
		{
			head_N = (*head)->n;
			*head = (*head)->next;
			free(delit_ptr);

		}
	}
	return (head_N);

}
