#include "lists.h"

/**
 * free_dlistint - frees a list of nodes
 * @head: is the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (cur)
	{
		head = head->next;
		free(cur);
		cur = head;
	}
}
