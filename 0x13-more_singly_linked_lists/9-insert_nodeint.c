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
	int x = idx;

	if (!head || !node)
	{
		free(node);
		return (NULL);
	}

	L = *head;

	while (x > 1 && L != NULL)
	{
		x--;
		L = L->next;
	}

	if (x > 0 && L == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	R = (L != NULL) ? L->next : NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}

	else
	{
		L->next = node;
		node->next = R;
	}

	return (node);
}
