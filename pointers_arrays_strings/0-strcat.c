#include "main.h"

/**
 * _strcat - concantenates two strings
 * @dest: destination of string
 * @src: source of string
 *
 * Return: pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
