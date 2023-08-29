#include "lists.h"

/**
 * print_listint_safe - a function
 * that prints a listint_t linked list.
 * @head: is a strcut contain elements and head node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t nodes = 0;

	if (!head)
		exit(98);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			nodes++;
			return (nodes);
		}
		current = current->next;
	}

	return (nodes);
}
