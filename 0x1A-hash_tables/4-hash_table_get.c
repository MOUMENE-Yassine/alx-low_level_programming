#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: the key you are looking for.
 *
 * Return:  the value associated with the element.
 *          or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	temp = ht->array[idx];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return ((temp == NULL) ? NULL : temp->value);
}
