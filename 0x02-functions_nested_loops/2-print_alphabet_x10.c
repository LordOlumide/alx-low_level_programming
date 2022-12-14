#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 * Description: 'Prints 10 times'
 *
 * Return: Always void(Success)
 */

void print_alphabet_x10(void)
{
	int n = 97;
	int i = 0;

	while (i < 10)
	{
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
