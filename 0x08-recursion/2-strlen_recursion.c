#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to count
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (s[a] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
