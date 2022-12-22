#include "main.h"

/**
 * leet - encode into 1337
 * @a: String to encode
 * Return: char *
 */

char *leet(char *a)
{
	int i, j;

	char x[6] = {'A', 'E', 'O', 'T', 'L'};
	char y[6] = {'4', '3', '0', '7', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == x[j] || a[i] - 32 == x[j])
				a[i] = y[j];
		}
	}

	return (a);
}
