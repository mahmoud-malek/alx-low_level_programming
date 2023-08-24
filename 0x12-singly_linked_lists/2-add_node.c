#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning
 * of a list_t list
 * @head: is a pointer to pointer of list_t
 * @str: is the string to copy into the new node
 * Return: pointer to new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *res = malloc(sizeof(list_t));

	if (res == NULL)
		return (NULL);

	if (str != NULL)
		res->str = strdup(str);

	if (res->str == NULL)
	{
		free(res);
		return (NULL);
	}
	res->len = strlen(res->str);

	res->next = *head;
	*head = res;

	return (res);
}
