#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, value;

	value = 0;
	i = 0;
	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			value = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			value = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			value = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (value);
}
