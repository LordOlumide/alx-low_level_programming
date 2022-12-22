#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: first string
 * @src: second string
 * @n: max size of src used
 * Return: char *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;

	while (1)
	{
		if (dest[dest_len] == '\0')
			break;
		dest_len++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
