#include "main.h"

/**
 * print_to_98 - prints to 98
 *
 * @n: no. to start from
 *
 * Return: always void
 */

void print_to_98(int n)
{
	if (n == 98)
		printnum(98);
	else if (n < 98)
	{
		while (n <= 98)
		{
			printnum(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printnum(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
}

/**
 * printnum - prints a number
 * @v: number to print
 *
 * Return: Always void
 */

void printnum(int v)
{
	if (v < 0)
	{
		_putchar('-');
		v = -v;
	}

	if (v < 10)
		_putchar(v + '0');
	else if (v >= 10 && v < 100)
	{
		_putchar((v / 10) + '0');
		_putchar((v % 10) + '0');
	}
	else if (v >= 100 && v < 1000)
	{
		_putchar((v / 100) + '0');
		_putchar((v / 10) + '0');
		_putchar((v % 10) + '0');
	}
}
