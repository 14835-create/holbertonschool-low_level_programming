#include <stdio.h>

/**
 * print_table - prints multiplication tables up to size
 * @size: size of table
 *
 * Return: 0.
 */

void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d ", row * col);
			col++;
		}
		printf("\n");
	}
}

int main(void)
{
	print_table(4);
	return 0;
}
