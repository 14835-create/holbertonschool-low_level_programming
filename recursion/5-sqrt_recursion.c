#include "main.h"

/**
 * find_sqrt - finds square root of of input num
 * @num: number of square root to find
 * @r: root
 *
 * Return: natural square root of num otherwise
 * -1 if non exists
 */

int find_sqrt(int num, int r)
{
	if (r * r == num)
		return (r);
	if ((r * r) > num)
		return (-1);
	return (find_sqrt(num, r + 1));
}

/**
 * _sqrt_recursion - returns te natural square root of number
 * @n: number to compute the square root of
 *
 * Return: the natural square root of otherwise
 * -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, 1));
}
