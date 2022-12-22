#include "main.h"

/**
 * _strcpy - copies a string to another string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: char *dest
 */

char *_strcpy(char *dest, char *src, int n)
{
	int dest_len, i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
}
