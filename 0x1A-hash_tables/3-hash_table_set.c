#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @key: is the key, can not be an empty string
 * @value: value is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * @ht: is the hash table you want to add or update the key/value to
 * Return: the index at which the key/value pair
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL, *current = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	/* Check if the key already exists in the linked list at idx */
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	/*if not exist then we create a new node*/
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = stdrdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
