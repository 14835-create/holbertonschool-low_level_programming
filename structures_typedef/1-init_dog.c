#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: doggos name
 * @age: doggos age
 * @owner: doggos owner
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
