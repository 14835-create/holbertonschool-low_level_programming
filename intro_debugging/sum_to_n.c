#include <stdio.h>

/**
 * sum_to_n - computes sum all integers from 1 - n
 * @n: interger sum
 *
 * Return: sum of integers 1 - n
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <=n; i++)
		sum += i;

	return (sum);
}

int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
