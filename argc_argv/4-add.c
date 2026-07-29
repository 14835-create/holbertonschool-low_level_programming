#include <stdio.h>
#include <stdlib.h>

/**
 * main - addition of positive numbers, new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 success otherwise 1 error
 */

int main(int argc, char *argv[])
{
	int num, dig, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (dig = 0; argv[num][dig]; dig++)
		{
			if (argv[num][dig] < '0' || argv[num][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);

	}

	printf("%d\n", sum);

	return (0);
}
