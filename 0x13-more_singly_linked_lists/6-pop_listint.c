#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: is a strcut contain elements and head node
 * Return: node's data
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (!head || !*head)
		return (data);

	tmp = *head;

	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
