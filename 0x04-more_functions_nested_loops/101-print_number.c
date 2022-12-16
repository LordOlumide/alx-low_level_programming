#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if  (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar((((n % 1000) % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 100000)
	{
		_putchar((n / 10000) + '0');
		_putchar(((n % 10000) / 1000) + '0');
		_putchar((((n % 10000) % 1000) / 100) + '0');
		_putchar(((((n % 10000) % 1000) % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
}