#include "main.h"

/**
 * print_triangle - prints triangle, new line
 * @size: size of triangle
 *
 */
void print_triangle(int size)
{
	int i, e;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (e = 1; e <= size - i; e++)
			_putchar(' ');

		for (e = 1; e <= i; e++)
			_putchar('#');

		_putchar('\n');
	}
}
