#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of string
 * @n: mac num of bytes used from src
 * @src: source of string
 * Return: pointer resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
