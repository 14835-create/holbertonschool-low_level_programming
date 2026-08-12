#include "hash_tables.h"

/**
 * hash_djb2 - implements djb2 hash algorithm
 * @str: pointer to string to hash
 *
 * Return: hash value result
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while (*str != '\0')
	{
		c = *str;
		hash = (hash * 33) + c;
		str++;
	}

	return (hash);
}
