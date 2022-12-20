#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to halve
 * Return: void
 */

void puts_half(char *str)
{
	int count, start, i;

	while (1 > 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	start = count % 2 == 0 ? count / 2 : (count - 1) / 2;
	for (i = start; i < count - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
