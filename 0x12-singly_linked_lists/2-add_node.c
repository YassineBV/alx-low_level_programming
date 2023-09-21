#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to the pointer of the head
 * @str: the string to be stored in the new node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int char_ct = 0;
	list_t *nw_nod = malloc(sizeof(list_t));

	if (nw_nod == NULL)
	{
		return (NULL);
	}
	nw_nod->str = strdup(str);

	if (nw_nod->str == NULL)
	{
		free(nw_nod);
		return (NULL);
	}
	while (*str != '\0')
	{
		char_ct++;
		str++;
	}
	nw_nod->len = char_ct;
	nw_nod->next = *head;
	*head = nw_nod;

	return (nw_nod);
	free(nw_nod);
}
