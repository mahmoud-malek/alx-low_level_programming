#include "lists.h"

/**
 * reverse_listint - a function that reverses
 *  a listint_t linked list.
 * @head: is a strcut contain elements and head node
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nex = NULL, *current = NULL;

	if (!head || !*head)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		nex = current->next;
		current->next = (current == *head ? NULL : *head);
		*head = current;
		current = nex;
	}

	return (*head);
}
