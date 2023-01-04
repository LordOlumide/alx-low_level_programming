#include "main.h"

/**
 * _sqrt_recursion - returns natural sqaire root or -1
 * @n: number to check
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_sqrt(n, 1));
}

/**
 * check_sqrt - checks for sqrt
 * @a: n
 * @b: 1
 *
 * Return: int
 */

int check_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (check_sqrt(a, b + 1));
}
