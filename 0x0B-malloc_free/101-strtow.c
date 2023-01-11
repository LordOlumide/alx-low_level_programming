#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits strings to words
 * @str: string to split
 *
 * Return: char **
 */

char **strtow(char *str)
{
	int i, arr_len = 0;
	char **value;

	if (str == NULL || strcmp(str, ""))
		return (NULL);

	arr_len = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			arr_len++;
	}

	value = (char **)malloc(sizeof(char *) * arr_len);
	
	return (value);
}
