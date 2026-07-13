#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: pointer to string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
