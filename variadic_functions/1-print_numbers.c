#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print nums, new line
 * @separator: string printed
 * @n: num of integers passed to function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	va_end(nums);
	printf("\n");
}
