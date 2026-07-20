#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly-allocated space in memory
 * contains a copy of string
 * @str: string to be copied
 *
 * Return: str = 0 (NULL)/insufficient memory avalible
 * otherwise pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
