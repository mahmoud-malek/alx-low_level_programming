#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long i = 0;

	if (!size)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	table->shead = NULL;
	table->stail = NULL;

	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
/**
 * create_new_node - Creates a new node with the given key and value.
 * @key: The key for the new node.
 * @value: The value for the new node.
 *
 * Return: A pointer to the new node or NULL on failure.
 */
shash_node_t *create_new_node(const char *key, const char *value)
{
	shash_node_t *newNode = malloc(sizeof(shash_node_t));

	if (!newNode)
		return (NULL);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (!newNode->key || !newNode->value)
	{
		free(newNode->key);
		free(newNode->value);
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;
	newNode->sprev = NULL;
	newNode->snext = NULL;

	return (newNode);
}

/**
 * add_node_to_sorted_list - Adds a new node to the sorted linked list.
 * @ht: The sorted hash table.
 * @newNode: The new node to add.
 */
void add_node_to_sorted_list(shash_table_t *ht, shash_node_t *newNode)
{
	shash_node_t *current, *prev = NULL;

	if (!ht->shead || strcmp(newNode->key, ht->shead->key) < 0)
	{
		newNode->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = newNode;
		else
			ht->stail = newNode;
		ht->shead = newNode;
	}
	else
	{
		current = ht->shead;
		while (current && strcmp(newNode->key, current->key) >= 0)
		{
			prev = current;
			current = current->snext;
		}

		newNode->sprev = prev;
		newNode->snext = current;
		if (current)
			current->sprev = newNode;
		else
			ht->stail = newNode;

		prev->snext = newNode;
	}
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	newNode = create_new_node(key, value);
	if (!newNode)
		return (0);

	newNode->next = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (newNode->next)
	{
		if (strcmp(newNode->next->key, key) == 0)
		{
			free(newNode->key);
			free(newNode->value);
			free(newNode);
			newNode->next->value = strdup(value);
			if (!newNode->next->value)
				return (0);
			return (1);
		}
		newNode->next = newNode->next->next;
	}

	add_node_to_sorted_list(ht, newNode);

	ht->array[key_index((const unsigned char *)key, ht->size)] = newNode;
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with 
 * a key from the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to look up.
 *
 * Return: The value associated with the key or NULL if the key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (!ht || !key)
		return (NULL);

	if (strcmp(key, "") == 0)
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in ascending order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = ht->shead;
	int first = 1;

	printf("{");
	while (node)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in descending order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = ht->stail;
	int first = 1;

	printf("{");
	while (node)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		first = 0;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}
