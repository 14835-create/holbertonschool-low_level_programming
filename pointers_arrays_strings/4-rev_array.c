#include "main.h"

/**
 * reverse_array - revserses content of array
 * @a: pointer to array
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
