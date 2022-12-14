#include "main.h"

/**
 * print_times_table - print times table
 * @n: number to end at
 *
 * Return: Always void
 */

void print_times_table(int n)
{
	int a = 0, row_num = n + 1, col_num = n + 1;
	int adder = 0;

	if (n > 15 || n < 0)
		return;

	while (row_num > 0)
	{
		while (col_num > 0)
		{
			printnum(a);
			a += adder;
			if (col_num != 1)
			{
				_putchar(',');
				_putchar(' ');
				if ((a + adder) < 10)
					_putchar(' ');
				if ((a + adder) < 100)
					_putchar(' ');
			}
			col_num--;
		}
		adder++;
		_putchar('\n');
		col_num = n + 1;
		row_num--;
	}
}

/**
 * printnum - prints num
 * @v: num it prints
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
