#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum to all parameters
 * @n: num of parameters passed to function
 *
 * Return: if n == 0
 * otherwise sum all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
