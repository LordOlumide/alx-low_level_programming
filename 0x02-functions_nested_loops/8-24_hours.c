#include "main.h"

/**
 * jack_bauer - prints '00:00' to '23:59'
 *
 * Return: Always void(Success)
 */

void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	while (a <= 2)
	{
		while (b <= 3)
		{
			while (c <= 5)
			{
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
