#include "main.h"

/**
 * times_table - prints times to 9
 *
 * Return: Always void
 */

void times_table(void)
{
	int a = 0;
	int no_of_rows = 0, no_of_columns = 0, adder = 0;

	while (no_of_rows < 9)
	{
		while (no_of_columns < 10)
		{
			if (a <= 9)
			{
				_putchar(a + '0');
			}
			else if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
			if (no_of_columns < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			a += adder;
			no_of_columns++;
		}
		no_of_columns = 0;
		_putchar('\n');
		a = 0;
		adder++;
		no_of_rows++;
	}
}
