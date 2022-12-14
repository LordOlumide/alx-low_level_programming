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
			_putchar(a + '0');
			a += adder;
			if (col_num != 1)
			{
				_putchar(',');
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
