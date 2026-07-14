#include "main.h"

/**
 * cap_string - uppercase all words of string
 * @s: string input
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');

	while (str[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= ('a' - 'A');
			j++;
		}
		i++;
	}

	return (str);
}
