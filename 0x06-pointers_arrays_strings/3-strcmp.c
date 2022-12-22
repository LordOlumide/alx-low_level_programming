#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len, i, return_value;

	return_value = 0;
	s1_len = 0;
	s2_len = 0;
	while (1)
	{
		if (s1[s1_len] == '\0')
			break;
		s1_len++;
	}
	while (1)
	{
		if (s2[s2_len] == '\0')
			break;
		s2_len++;
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		if ((s1[i] - s2[i]) != 0)
			return_value = s1[i] - s2[i];
	}
	if (s2_len > s1_len)
		return_value = -1;

	return (return_value);
}
