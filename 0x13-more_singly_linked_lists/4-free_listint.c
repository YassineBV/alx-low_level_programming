#include "lists.h"
/**
 * free_listint - Free listint_t memory allocation.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *nods_frs;


	while (head != NULL)
	{
		nods_frs = head;
		head = head->next;
		free(nods_frs);
	}

}
