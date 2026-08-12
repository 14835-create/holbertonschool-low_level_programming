#include "hash_tables.h"

/**
 * key_index - gives index of key
 * @key: string (key)
 * @size: size of array hash table
 *
 * Return: index where key/value pair stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
