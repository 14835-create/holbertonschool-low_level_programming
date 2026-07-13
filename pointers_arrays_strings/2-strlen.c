#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: pointer to string
 *
 * ReturnL length string
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
