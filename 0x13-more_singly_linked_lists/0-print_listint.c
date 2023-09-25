#include "lists.h"
/**
 * print_listint - Prints the elements of listint_t.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nd_coun = 0;
	const listint_t *travrs_ptr;



	travrs_ptr = h;

	while (travrs_ptr != NULL)
	{
		printf("%d\n", travrs_ptr->n);
		nd_coun++;
		travrs_ptr = travrs_ptr->next;
	}


	return (nd_coun);

}
