#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: is structure to print
 *
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
	}

	return (nodes);
}
