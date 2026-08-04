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
	list_t *new;
	char *dup;
	unsigned int len = 0;

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	while (dup[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(dup);
		return (NULL);
	}

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
