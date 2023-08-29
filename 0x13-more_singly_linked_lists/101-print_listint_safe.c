#include "lists.h"

/**
 * print_listint_safe - a function
 * that prints a listint_t linked list.
 * @head: is a strcut contain elements and head node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *check = NULL;
	size_t nodes = 0, loops = 0;

	if (!head)
		exit(98);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		current = current->next;

		check = head;
		loops = 0;

		while (loops < nodes)
		{
			if (current == check)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (nodes);
			}

			loops++;
			check = check->next;
		}
	}

	return (nodes);
}
