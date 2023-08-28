#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position.
 * @head: is a strcut contain elements and head node
 * @idx: index to insert before
 * @n: data of the new node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *L, *R;

	if (!head || !node)
		return (NULL);

	L = *head;
	idx--;

	while (idx > 0 && L != NULL)
	{
		idx--;
		L = L->next;
	}

	if (L == NULL)
		return (NULL);

	node->n = n;
	R = L->next;
	L->next = node;
	node->next = R;

	return (node);
}
