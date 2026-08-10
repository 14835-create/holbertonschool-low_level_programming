#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: pointer to head list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
