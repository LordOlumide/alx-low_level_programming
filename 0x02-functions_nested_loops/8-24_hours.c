#include "main.h"

/**
 * jack_bauer - prints '00:00' to '23:59'
 *
 * Return: Always void(Success)
 */

void jack_bauer(void)
{
	int a = 0, first = 0, second = 0, c = 0, d = 0;

	while (a <= 23)
	{
		while (c <= 5)
		{
			while (d <= 9)
			{
				if (a < 10)
				{
					first = 0;
					second = a;
				}
				else if (a > 20)
				{
					first = a / 10;
					second = a % 10;
				}
				_putchar(first + '0');
				_putchar(second + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
				d++;
			}
			d = 0;
			c++;
		}
		c = 0;
		a++;
	}
}
