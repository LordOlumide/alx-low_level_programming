#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0;; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
