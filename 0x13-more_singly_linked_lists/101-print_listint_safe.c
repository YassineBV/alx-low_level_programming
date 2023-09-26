#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr_prnt;

	if (head == NULL)
	{
		exit(98);
	}

	ptr_prnt = head;

	while (ptr_prnt != NULL)
	{
		printf("%d\n", ptr_prnt->n);
		ptr_prnt = ptr_prnt->next;
	}
	return (0);
}
