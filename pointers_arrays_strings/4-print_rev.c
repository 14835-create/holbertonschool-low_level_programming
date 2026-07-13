#include "main.h"

/**
 * print_rev - prints string in reverse, new line
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s)
	{
		s++;
		l++;
	}

	s--;

	while (l > 0)
	{
		_putchar(*s);
		s--;
		l--;
	}

	_putchar('\n');
}
