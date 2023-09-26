#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a specific index in listint_t.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (starting at 0).
 *
 * Return: If the function succeeds, return 1.
 *         function fails, return -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int inx = 0;
	listint_t *delet_ptr, *ptr_beIdx;

	if (*head == NULL)
		return (-1);

	ptr_beIdx = *head;
	delet_ptr = *head;

	if (index == 0)
	{
		*head = delet_ptr->next;
		free(delet_ptr);
		delet_ptr = NULL;
		return (1);
	}
	else
	{
		while (ptr_beIdx != NULL)
		{
			if (inx == index)
			{
				ptr_beIdx->next = delet_ptr->next;
				free(delet_ptr);
				delet_ptr = NULL;
				return (1);
			}
			ptr_beIdx = delet_ptr;
			delet_ptr = delet_ptr->next;
			inx++;
		}
	}
	return (-1);
}
