#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: number times character _ printed
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
