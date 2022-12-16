#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: no. of '/' to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int b, c;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			c = b;
			while (c > 0)
			{
				_putchar(' ');
				c--;
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
