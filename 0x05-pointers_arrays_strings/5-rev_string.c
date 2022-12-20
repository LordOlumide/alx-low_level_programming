#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be reversed
 * Return: void
 */

void rev_string(char *str)
{
	int count, i, j;
	char *h_str, temp;

	count = 0;

	while (1 > 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	h_str = str;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(h_str + j);
			*(h_str + j) = *(h_str + (j - 1));
			*(h_str + (j - 1)) = temp;
		}
	}
}
