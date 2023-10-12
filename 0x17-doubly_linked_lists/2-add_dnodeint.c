#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of list
 * @n: the number to add inside node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t *));
	if (!node)
		return (NULL);

	node->n = n;
	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		*head = node;
		return (node);
	}

	(*head)->prev = node;
	node->prev = NULL;
	node->next = *head;
	(*head) = node;
	return (node);
}
