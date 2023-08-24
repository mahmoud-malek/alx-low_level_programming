#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *
 * @head: the first node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head;
		head = head->next;
		free(tmp);
	}

	free(head);
}
