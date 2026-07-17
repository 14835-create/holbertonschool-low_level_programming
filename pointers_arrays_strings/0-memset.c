#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @b: const byte to fill
 * @s: pointer to byte
 * @n: number of bytes to fill
 *
 * Return: pointer to memory of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
