#include "lists.h"

/**
 * find_listint_loop - a function that
 * finds the loop in a linked list.
 * @head: is a strcut contain elements and head node
 * Return: pointer to loop node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (!head)
		return (NULL);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
