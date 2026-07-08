#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: character print
 *
 * Return: 1 success
 * error - -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
