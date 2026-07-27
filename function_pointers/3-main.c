#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to arg
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	func = get_op_func(op);

	if (func == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(num1, num2));
	return (0);
}
