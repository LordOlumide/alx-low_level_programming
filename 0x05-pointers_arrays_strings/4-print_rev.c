#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @str: string to print in reverse
 * Return: void
 */

void print_rev(char *str)
{
	int len_of_str, i;

	len_of_str = 0;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			len_of_str++;
		}
	}


	i = len_of_str - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
