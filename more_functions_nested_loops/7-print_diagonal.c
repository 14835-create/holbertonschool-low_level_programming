#include "main.h"

/**
 * print_diagonal - draws diagonal line on terminal
 * @n: number times '\' printed
 *
 */
void print_diagonal(int n)
{
	int i, e;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (e = 0; e < i; e++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
