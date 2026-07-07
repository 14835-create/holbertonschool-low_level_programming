#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character checked
 *
 * Return: c lowercase is 1, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
