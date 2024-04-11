#include "search_algos.h"

/**
 * linear_skip - a function that searches for a value in a sorted skip list
 * @list: is a pointer to the head of the skip list to search in
 * @value: is the value to search for
 * Return: a pointer to the first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list;
	skiplist_t *prev = NULL;

	if (!list)
		return (NULL);

	while (current->n < value && current->express)
	{
		prev = current;
		current = current->express;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	if (current->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			   prev->index, current->index);
	}
	else
	{
		prev = current;
		while (current->next)
			current = current->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
			   prev->index, current->index);
	}

	for (; prev && prev->index <= current->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
