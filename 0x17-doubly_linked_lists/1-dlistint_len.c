#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	size_t elm = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		elm++;
	}

	return (elm);

}
