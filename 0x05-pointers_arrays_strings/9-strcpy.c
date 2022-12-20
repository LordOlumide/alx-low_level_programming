#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = 0;
	while (1 > 0)
	{
		if (src[count] == '\0')
			break;
		count++;
	}

	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
