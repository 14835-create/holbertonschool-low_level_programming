#include "main.h"

/**
 * puts_half - prints second half string 0-9, new line
 *
 * @str: pointer to string
 *
 */
void puts_half(char *str)
{
	int l = 0, start;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		start = l / 2;
	else
		start = (l + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
