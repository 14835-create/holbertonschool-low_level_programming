#include "main.h"

/**
 * _atoi - converts string into integer
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (result > (2147483647 - digit) / 10)
			{
				if (sign == -1)
					return (-2147483648);
				return (2147483647);
			}

			result = result * 10 + digit;
			started = 1;
		}
		else if (started)
			break;

		i++;
	}

	return (result * sign);
}
