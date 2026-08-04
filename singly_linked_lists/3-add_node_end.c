#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node end of list_t
 * @head: pointer to pointer to head of list
 * @str: string to dup and store in node
 *
 * Return: Address of new element otherwise
 * NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
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
		return(NULL);
	}

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);
}
