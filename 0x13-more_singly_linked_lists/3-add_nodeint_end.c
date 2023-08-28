#include "lists.h"

/**
 * add_nodeint_end -  a function that
 *  adds a new node at the end of a listint_t list.
 * @head: is a strcut contain elements and head node
 * @n: node to add
 * Return: pointer to nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!node)
		return (NULL);

	node->n = n;

	if (*head == NULL)
		*head = node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = node;
	}

	return (node);
}
