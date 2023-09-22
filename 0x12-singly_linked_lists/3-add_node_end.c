#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: A pointer to the newly added node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *link_ptr, *nw_node;
	int num_of_char = 0;

	nw_node = malloc(sizeof(list_t));

	if (nw_node == NULL)
	{
		return (NULL);
	}
	nw_node->next = NULL;
	nw_node->str = strdup(str);
	if (nw_node->str == NULL)
	{
		free(nw_node);
		return (NULL);
	}
	while (*str != '\0')
	{
		num_of_char++;
		str++;
	}
	nw_node->len = num_of_char;

	if (*head == NULL)
	{
		*head = nw_node;
		return (nw_node);
	}

	link_ptr = *head;
	while (link_ptr != NULL)
	{
		if (link_ptr->next == NULL)
		{
			link_ptr->next = nw_node;
			break;
		}
		link_ptr = link_ptr->next;
	}
	return (nw_node);
}
