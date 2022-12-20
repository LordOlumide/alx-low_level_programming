#include "main.h"

/**
 * puts2 - funvtion
 * @str: to print
 * Return: void
 */

void puts2(char *str)
{
	int count, i;

	count = 0;
	while (1 > 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	i = 0;
	while (i < count)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
