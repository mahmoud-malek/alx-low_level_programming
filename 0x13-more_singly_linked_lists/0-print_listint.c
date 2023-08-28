#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: is a strcut contain elements
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (!h)
		return (0);

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodes++;
	}

	return (nodes);
}
