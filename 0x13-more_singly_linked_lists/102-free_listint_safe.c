#include "lists.h"

/**
 * free_listint_safe - a function that frees
 *  a listint_t list.
 * @h: is a strcut contain elements and head node
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *nex = NULL, *current = NULL;
	size_t freed = 0;

	if (!h || !*h)
		return (0);

	current = *h;

	while (current)
	{
		nex = current->next;
		freed++;

		if (current <= nex)
		{
			free(current);
			*h = NULL;
			return (freed);
		}

		free(current);
		current = nex;
	}

	*h = NULL;
	return (freed);
}
