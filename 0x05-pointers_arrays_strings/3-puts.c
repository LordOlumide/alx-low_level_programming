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

	for (i = 0; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
}
