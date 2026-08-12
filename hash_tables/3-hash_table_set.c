#include "hash_tables.h"

/**
 * update_value - updates key value
 * @node: pointer to node key
 * @value: new value dupe
 *
 * Return: 1 success otherwise 0.
 */

int update_value(hash_node_t *node, const char *value)
{
	char *new_val = strdup(value);

	if (new_val == NULL)
		return (0);
	free(node->value);
	node->value = new_val;
	return (1);
}
/**
 * hash_table_set - key/value pair adds/updates in hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value to store
 *
 * Return: 1 success otherwise 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new;
	unsigned long int i;

	if (key == NULL || value == NULL || ht == NULL || *key == '\0')
		return (0);

	i = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[i];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (update_value(tmp, value));
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
