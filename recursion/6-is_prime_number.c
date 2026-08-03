#include "main.h"

/**
 * is_div - checks if number is dividable
 * @num: num
 * @div: divis
 *
 * Return: Number is div - 0
 * otherwise is not div by - 1
 */

int is_div(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_div(num, div + 1));
}

/**
 * is_prime_number - checks if number if prime
 * @n: num
 *
 * Return: if int is not prime - 0
 * otherwise if prime - 1
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_div(n, div));
}
