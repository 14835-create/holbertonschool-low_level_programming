#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key
 * @ht: pointer to hash table
 * @key: key to look for
 *
 * Return: value of ket otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
