#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elemetns of list_t list
 * @n: pointer to lsit_t list
 *
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return count;
}
