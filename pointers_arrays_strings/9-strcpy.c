#include "main.h"

/**
 * _strcpy - copies the string pointed by src
 * @dest: destination buffer
 * @src: source string
 *
 * ReturnL pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
