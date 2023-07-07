#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: is the key.
 * @value: The value associated with the key.
 *
 * Return: 1 or 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new = ht->array[idx];
	while (new)
	{
		if (!strcmp(key, new->key))
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
