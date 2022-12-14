#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @c: inputted num
 *
 * Return: last digit of inputted number
 */

int print_last_digit(int c)
{
	int d;

	d = c % 10;
	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	_putchar(d + '0');
	return (d);
}
