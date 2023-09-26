#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at index in listint_t.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve (starting at 0).
 *
 * Return: the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr_tail, *ptr_indx;
	unsigned int is_indx = 0;


	ptr_tail = head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (ptr_tail == NULL)
	{
		return (NULL);
	}

	while (ptr_tail != NULL)
	{

		if (is_indx == index)
		{
			ptr_indx = ptr_tail;
		}
		ptr_tail = ptr_tail->next;
		is_indx++;
	}
	return (ptr_indx);
}
