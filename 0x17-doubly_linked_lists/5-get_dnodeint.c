#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: is the head node
 * @index: index for target node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (head && (int)index >= 0)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}

	return (NULL);
}
