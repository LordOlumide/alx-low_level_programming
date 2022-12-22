#include "main.h"

/**
 * string_toupper - change all lower case letters to upper
 * @a: string to change
 * Return: char *
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
	return (a);
}
