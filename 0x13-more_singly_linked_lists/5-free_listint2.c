#include "lists.h"
/**
 * free_listint2 - Frees all listint_t list allocated memory.
 * @head: Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *free_AllNds;

	if (*head == NULL || head == NULL)
		return;


	while (*head != NULL)
	{
		free_AllNds = *head;
		*head = (*head)->next;
		free(free_AllNds);
	}
	head = NULL;

}
