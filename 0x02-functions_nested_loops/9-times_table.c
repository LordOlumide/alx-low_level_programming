#include "main.h"

/**
 * times_table - prints times to 9
 *
 * Return: Always void
 */

void times_table(void)
{
	int a = 0, b = 0, c = 0, d = 0;
	int e = 0, f = 0, g = 0, h = 0, i = 0;
	int no_of_times = 0, adder = 0, adder_incrementer = 0;

	while (no_of_times < 9)
	{
		while (adder < 9)
		{
			_putchar(a + '0');
			a += adder;
			adder++;
		}
		no_of_times++;
	}
}
