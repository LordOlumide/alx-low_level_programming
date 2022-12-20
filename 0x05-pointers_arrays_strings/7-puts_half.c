#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to halve
 * Return: void
 */

void puts_half(char *str)
{
	int count, start, i;

	count = 0;
	while (1 > 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	start = count % 2 == 1 ? count / 2 : (count - 1) / 2;
	for (i = start + 1; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
