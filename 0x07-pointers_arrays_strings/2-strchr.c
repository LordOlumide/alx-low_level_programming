#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to check
 * @c: char to check for
 *
 * Return: char *
 */

char *_strchr(char *s, char c)
{
	int num, b;

	num = 0;
	while (s[num] != '\0')
	{
		num++;
	}
	for (b = 0; b < num; b++)
	{
		if (s[b] == c)
			return (&(s[b]));
	}
	return (0);
}
