#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers from min - max
 * @min: value of first array
 * @max: last value of array
 *
 * Return: pointer to newly allocated array
 * otherwise NULL on fail
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
