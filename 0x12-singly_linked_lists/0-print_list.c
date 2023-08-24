#include "lists.h"

/**
 *
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	for (; h != NULL; h = h->next)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] (%s)\n", h->len, h->str);

		nodes++;
	}

	return (nodes);
}
