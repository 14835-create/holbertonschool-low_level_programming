#include "main.h"

/**
 * factorial - returns fact to number
 * @n: number
 *
 * Return: factorial n >= 0
 * -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
