#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) in dlistint_t list
 * @head: pointer to head list
 *
 * Return: sum all node otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
