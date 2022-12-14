#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: int to be checked
 *
 * Return: 1, 0 or -1 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	return (-1);
}