#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * Return: char *
 */

char *str_concat(char *s1, char *s2)
{
	int l = 0, i = 0, j = 0, k = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	arr = malloc(l + 1);
	if (arr == NULL)
		return (NULL);

	j = 0;
	while (k < l)
	{
		if (k < i)
			arr[k] = s1[k];
		if (k >= i)
		{
			arr[k] = s2[j];
			j++;
		}
		k++;
	}
	arr[k] = '\0';

	return (arr);
}
