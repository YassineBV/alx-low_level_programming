#include "lists.h"
/**
 * listint_len - Calculates the number of nodes in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t cont_elmt = 0;
	const listint_t *ptr_list;


	ptr_list = h;

	while (ptr_list != NULL)
	{
		cont_elmt++;
		ptr_list = ptr_list->next;
	}
	return (cont_elmt);
}
