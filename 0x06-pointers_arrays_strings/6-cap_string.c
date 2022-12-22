#include "main.h"

/**
 * cap_string - capitalizes each word
 * @a: string to be capitalized
 * Return: char *
 */

char *cap_string(char *a)
{
	int i;

	if (a[0] >= 97 && a[0] <= 122)
		a[0] = a[0] - 32;

	for (i = 1; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == '.')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] = a[i + 1] - 32;
		}
	}

	return (a);
}
