#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given
 *position in listint_t.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The value to store in the new node.
 *
 * Return: If the function fails, return NULL. Otherwise, return a pointer to
 *         the head of the modified list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr_befIdx = *head;
	listint_t *ptr_atIdx;
	unsigned int chek_indx = 0;

	ptr_atIdx = malloc(sizeof(listint_t));
	if (ptr_atIdx == NULL)
	{
		return (NULL);
	}
	ptr_atIdx->n = n;


	if (*head == NULL)
	{
		*head = ptr_atIdx;
		return (*head);
	}
	if (idx == 0)
	{
		ptr_atIdx->next = *head;
		*head = ptr_atIdx;
		return (*head);
	}
	while (ptr_befIdx->next != NULL)
	{
		if (chek_indx == idx - 1)
		{
			ptr_atIdx->next = ptr_befIdx->next;
			ptr_befIdx->next = ptr_atIdx;
			return (ptr_atIdx);
		}
		ptr_befIdx = ptr_befIdx->next;
		chek_indx++;
	}
	free(ptr_atIdx);
	return (NULL);
}

