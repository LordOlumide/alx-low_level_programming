#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: char to initialize the arrayw ith
 * Return: char * or '\0'
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);
	if (!arr)
		return '\0';
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
