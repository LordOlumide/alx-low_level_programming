#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated memery address
 * @str: string to be copied
 * Return: char *
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0, count = 0;

	if (str == '\0')
		return ('\0');

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	arr = malloc(count);
	if (!arr)
		return ('\0');

	for (i = 0; i < count; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
