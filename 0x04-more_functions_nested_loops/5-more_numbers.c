#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 * Return: Always void
 */

void more_numbers(void)
{
	int a, loop_count;

	for (loop_count = 0; loop_count < 10; loop_count++)
	{
		for (a = 0; a < 10; a++)
		{
			_putchar(a + '0');
		}
		for (a = 0; a <= 4; a++)
		{
			_putchar('1');
			_putchar(a + '0');
		}

		_putchar('\n');
	}
}
