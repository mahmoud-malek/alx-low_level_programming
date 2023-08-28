#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns
 * the nth node of a listint_t linked list.
 * @head: is a strcut contain elements and head node
 * @index: the nth node to return
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index)
	{
		index--;
		head = head->next;
	}

	if (index)
		return (NULL);

	return (head);
}
