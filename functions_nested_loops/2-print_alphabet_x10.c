#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int letter;
	char ch;

	for (letter = 0; letter < 10; letter++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
