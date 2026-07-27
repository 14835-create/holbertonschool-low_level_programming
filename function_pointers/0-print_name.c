#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: the name to print
 * @f: pointer to a function that prints name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)

	f(name);
}
