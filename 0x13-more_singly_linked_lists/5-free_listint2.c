#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: is a strcut contain elements and head node
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head != NULL && *head != NULL)
	{
		while (*head != NULL)
		{
			hold = *head;
			*head = (*head)->next;
			free(hold);
		}

		*head = NULL;
	}
}
