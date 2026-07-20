#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer newly allocated memory containing s1+s2
 * or NULL if allocating fails
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j, length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	string = malloc(sizeof(char) * (length1 + length2 + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		string[i] = s1[i];

	for (j = 0; j < length2; j++)
		string[i + j] = s2[j];

	string[length1 + length2] = '\0';

	return (string);
}
