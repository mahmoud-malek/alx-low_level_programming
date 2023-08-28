#include "lists.h"

/**
 * sum_listint -  function that returns the
 * sum of all the data (n) of a listint_t linked list
 * @head: is a strcut contain elements and head node
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
