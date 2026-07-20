#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and intializes it with a char
 * @size: size of arr
 * @c: char to initialize the arr with
 *
 * Return: if size = 0 funtion fails (NULL)
 * otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
