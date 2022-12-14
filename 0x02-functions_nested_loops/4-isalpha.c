#include "main.h"

/**
 * _isalpha - checks if the char is a letter
 * @c: The char to check
 *
 * Return: 1(Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
