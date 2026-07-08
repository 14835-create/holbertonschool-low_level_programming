#include "main.h"

/**
 * print_square - prints a square, new line
 * @size: size of square
 *
 */
void print_square(int size)
{
	int i, e;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (e = 0; e < size; e++)
			_putchar('#');

		_putchar('\n');
	}
}
