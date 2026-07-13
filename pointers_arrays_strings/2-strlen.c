#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: length string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l += 1;
		s++;
	}

	return (l);
}
