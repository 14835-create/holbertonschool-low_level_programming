#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates character in string hello
 * @s: string to print
 * @c: character to find
 *
 * Return: pointer to first occurance of c in s,
 * NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);
}
