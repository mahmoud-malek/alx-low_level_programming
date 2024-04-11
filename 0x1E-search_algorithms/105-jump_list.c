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
	int low = 0, high = sqrt(size), jump = sqrt(size);


	if (!list)
		return (NULL);

	while (high < (int)size && (list + high)->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n", high, (list + high)->n);
		low = high;
		high += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	if (high >= (int)size)
		high = size - 1;

	while (low <= high)
	{
		printf("Value checked at index [%d] = [%d]\n", low, (list + low)->n);
		if ((list + low)->n == value)
			return (list + low);
		low++;
	}

	return (NULL);
}
