#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int first_count, second_count, final_count, i;

	first_count = 0;
	second_count = 0;
	final_count = 0;

	while (1)
	{
		if (dest[first_count] == '\0')
			break;
		first_count++;
	}
	while (1)
	{
		if (src[second_count] == '\0')
			break;
		second_count++;
	}
	final_count = first_count + second_count;

	for (i = 0; i < second_count; i++)
		dest[first_count + i] = src[i];
	dest[final_count + 1] = '\0';

	return (dest);
}
