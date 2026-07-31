#include "main.h"

/**
 * _puts_recursion - prints a string, new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
	else
		_ptchar('\n');
}
