#include "hash_tables.h"


/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int;

	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		while = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
