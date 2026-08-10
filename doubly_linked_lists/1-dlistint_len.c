#include "lists.h"

/**
 * dlistint_len - returns num of elements in dlistint_t list
 * @h: pointer to head
 *
 * Return: num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
