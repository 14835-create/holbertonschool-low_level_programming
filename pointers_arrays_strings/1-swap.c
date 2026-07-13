#include "main.h"

/**
 * swap_int - swaps int a, int b
 * @a: pointer to first int
 * @b: pointer to second int
 * t - temp
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
