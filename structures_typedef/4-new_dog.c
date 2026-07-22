#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

		return (i);
}

/**
 * _strcpy - copies string from src to dest
 * @dest: string to be copied
 * @src: string to be copied from
 *
 * Return: Pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - program that creates new dog.
 * @name: doggos name
 * @age: doggos age
 * @owner: doggos owner
 *
 * Return: Poinnter to new dog
 * otherwise NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int namelength, ownerlength;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	namelength = _strlen(name);
	ownerlength = _strlen(owner);

	d->name = malloc(namelength + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(ownerlength + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
