#include "lists.h"
/**
 * free_listint2 - Frees all listint_t list allocated memory.
 * @head: Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *free_AllNds, *tmp_ptr;

	if (*head == NULL || head == NULL)
		return;

	free_AllNds = *head;

	while (free_AllNds != NULL)
	{
		tmp_ptr = free_AllNds->next;
		free(free_AllNds);
		free_AllNds = tmp_ptr;
	}
	*head = NULL;

}
