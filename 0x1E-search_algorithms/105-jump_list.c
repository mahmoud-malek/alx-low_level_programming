#include "search_algos.h"

/**
 * jump_list - a function that searches for a value
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: a pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current = list;
	listint_t *prev = NULL;
	size_t jump = sqrt(size);
	size_t i = 0;

	if (!list)
		return (NULL);

	while (current->n < value && current->next)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);

	for (; prev && prev->index <= current->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
