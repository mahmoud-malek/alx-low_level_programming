#include "lists.h"

/**
 * add_node_end - a function that adds
 * a new node at the end of a list_t list.
 *
 * @head: is a pointer to pointer of list_t
 * @str: is the string to copy into the new node
 *
 * Return: pointer to new tail node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *node = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (node == NULL)
		return (NULL);

	if (str != NULL)
		node->str = strdup(str);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while ((tmp)->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = node;
	return (*head);
}
