#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds new node at start of list_t
 * @head: pointer to pointer to head of list
 * @str: string to dup and store in new node
 *
 * Return: Address of new element otherwise
 * NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
