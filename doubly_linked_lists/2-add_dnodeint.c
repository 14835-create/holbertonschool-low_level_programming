#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of dilistint_t list
 * @head: pointer to pointer - head of list
 * @n: int to store new node
 *
 * Return: address of new element otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
