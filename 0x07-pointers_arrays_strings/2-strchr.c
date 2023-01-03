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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			break;
	return (s[i] == c ? (s + i) : '\0');
}
