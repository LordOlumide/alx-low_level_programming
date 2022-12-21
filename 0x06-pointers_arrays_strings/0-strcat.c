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
	char *output;

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

	output[final_count + 1];
	for (i = 0; i < first_count; i++)
		output[i] = dest[i];
	for (i = 0; i < second_count; i++)
		output[first_count + i] = src[i];
	output[final_count + 1] = '\0';

	dest = output;

	return (dest);
}
