#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free doggo
 * @d: pointer to doggo to free
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
