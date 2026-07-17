#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory
 * @dest: destination memory
 * @src: source memory
 * @n: number bytes to cpy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
