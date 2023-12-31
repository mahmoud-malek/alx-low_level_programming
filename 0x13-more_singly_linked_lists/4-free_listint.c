#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: is a strcut contain elements and head node
 */

void free_listint(listint_t *head)
{
	listint_t *hold = head;

	if (head != NULL)
	{
		while (hold != NULL)
		{
			head = head->next;
			free(hold);
			hold = head;
		}
	}
}
