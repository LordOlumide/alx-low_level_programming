#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string to check
 *
 * Return: int
 */

int _strlen(char *str)
{
	int count, i;

	count = 0;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
