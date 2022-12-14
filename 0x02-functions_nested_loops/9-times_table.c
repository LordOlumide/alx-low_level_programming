#include "main.h"

/**
 * times_table - prints times to 9
 *
 * Return: Always void
 */

void times_table(void)
{
	int a = 0;
	int no_of_times = 0, adder = 0;

	while (no_of_times < 9)
	{
		while (adder < 9)
		{
			_putchar(a + '0');
			if (adder != 8)
			{
				_putchar(',');
				_putchar(' ');
			}
			a += adder;
		}
		_putchar('\n');
		a = 0;
		adder++;
		no_of_times++;
	}
}
