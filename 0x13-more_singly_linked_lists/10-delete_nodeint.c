#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: is a strcut contain elements and head node
 * @index: index to delete
 * Return: 1 on success or -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold = NULL, *traverse;

	if (head == NULL || *head == NULL)
		return (-1);

	traverse = *head;

	if (index == 0) /*head case*/
	{
		hold = (*head);
		*head = (*head)->next;

		free(hold);
		return (1);
	}

	else /*other cases*/
	{

		while (index > 1 && traverse != NULL)
		{
			traverse = traverse->next;
			index--;
		}

		/*if element is exists or index > length of the list*/
		if (index > 1 || traverse == NULL || traverse->next == NULL)
			return (-1);

		hold = traverse->next;
		traverse->next = hold->next;
		free(hold);
		return (1);
	}
}
