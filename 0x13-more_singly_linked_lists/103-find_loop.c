#include "lists.h"

/**
 * find_listint_loop - a function that
 * finds the loop in a linked list.
 * @head: is a strcut contain elements and head node
 * Return: pointer to loop node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nex = head;

	if (!head)
		return (NULL);

	while (head)
	{
		nex = nex->next;

		if (head <= nex)
			return (head);

		head = nex;
	}

	return (NULL);
}
