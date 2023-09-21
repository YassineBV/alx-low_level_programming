#include "lists.h"
/**
 * list_len - counts the number of nodes in a list_t
 * @h: a pointer to the head node of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t nd_count = 0;


	if (h != NULL)
	{
		nd_count++;
		while (h->next != NULL)
		{
			nd_count++;
			h = h->next;
		}


	}
	return (nd_count);

}
