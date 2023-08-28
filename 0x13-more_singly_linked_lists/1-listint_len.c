#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 *  in a linked listint_t list
 * @h: is a strcut contain elements
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	for (; h != NULL; h = h->next)
		nodes++;

	return (nodes);
}
