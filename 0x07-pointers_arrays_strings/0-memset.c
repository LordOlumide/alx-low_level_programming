#include "main.h"

/**
 * _memset - fills the first n bytes of memery area s with b
 * @s: pointer to memory area
 * @b: constant byte to fill
 * @n: no. of spaces to fill
 *
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		*(s + num) = b;
	}

	return (s);
}
