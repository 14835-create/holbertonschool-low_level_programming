#include "main.h"

/**
 * rev_string - reverse string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int i, e;
	char tmp;

	e = 0;
	while (s[e] != '\0')
		e++;

	for (i = 0; i < e / 2; i++)
	{
		tmp = s[i];
		s[i] = s[e - 1 - i];
		s[e - 1 - i] = tmp;
	}
}
