#include "main.h"

/**
 * _isdigit - checks if c is a number
 * @c: num to check
 * Return: 1(is num), 0(is not num)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
