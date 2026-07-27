#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
