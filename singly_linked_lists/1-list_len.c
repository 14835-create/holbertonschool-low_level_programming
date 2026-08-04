#include "lists.h"

/**
 * list_len - returns num of elements in list_t
 * @h: pointer to head
 *
 * Return: num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
