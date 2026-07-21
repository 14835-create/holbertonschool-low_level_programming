#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array, sets to 0
 * @nmemb: number of elemetns
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 * otherwise NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
