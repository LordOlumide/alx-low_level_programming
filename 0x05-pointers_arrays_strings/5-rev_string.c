#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be reversed
 * Return: void
 */

void rev_string(char *str)
{
	int len, i;

	len = 0;

	while (1 > 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}

	char rev_str[len];

	i = 0;
	while (i < len)
	{
		rev_str[i] == str[len - i - 1]
		i++;
	}
	&str = &rev_str;
}
