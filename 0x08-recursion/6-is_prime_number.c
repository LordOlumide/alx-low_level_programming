#include "main.h"

/**
 * is_prime_number - checks if num is prime
 * @n: num to check
 *
 * Return: 1(true) or 0(false)
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (check_prime(n, 1));
}

/**
 * check_prime - checks ifit's a prime
 * @a: num to check
 * @b: starting num
 * Return: int
 */

int check_prime(int a, int b)
{
	if (b * b == a)
		return (0);
	else if (b * b > a)
		return (1);
	else
		return (check_prime(a, b - 1));
}
