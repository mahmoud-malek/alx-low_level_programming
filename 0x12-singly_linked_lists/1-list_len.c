#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
		nodes++;

	return (nodes);
}
