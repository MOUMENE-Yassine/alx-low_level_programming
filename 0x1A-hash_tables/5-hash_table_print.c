#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: A pointer to the hash table.
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int idx;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		if (temp != NULL)
		{
			if (flag == 1)
				printf(", ");

			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
