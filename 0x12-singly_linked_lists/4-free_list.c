#include "lists.h"
/**
 * free_list - Frees all the nodes in list_t.
 * @head: Pointer to the first node.
 */
void free_list(list_t *head)
{
	list_t *nodes_ptr;

	nodes_ptr = head;

	while (head != NULL)
	{
		nodes_ptr = head->next;
		free(head->str);
		free(head);
		head = nodes_ptr;
	}

}
