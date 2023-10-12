#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: the number to add inside node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *tmp = NULL;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t *));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		node->prev = NULL;
		return (node);
	}

	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = node;
	node->prev = tmp;

	return (node);
}
