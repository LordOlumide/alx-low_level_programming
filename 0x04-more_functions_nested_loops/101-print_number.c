#include "main.h"

/**
 * print_number - prints a number
 * @c: number to print
 * Return: void
 */

void print_number(int c)
{
	unsigned int n = c;

	if (c < 0)
	{
		_putchar('-');
		n = -n;
	}

	if  (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
