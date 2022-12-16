#include "main.h"

/**
 * _isupper - checks whether a char is upper case
 * @c: char to check
 * Return: 1(upper), 0(not upper)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
