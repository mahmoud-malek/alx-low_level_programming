#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 *  at the beginning of a listint_t list
 * @head: is a strcut contain elements and head node
 * @n: node to add
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
