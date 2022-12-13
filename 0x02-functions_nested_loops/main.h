#include "main.h"

/**
 * print_alphabet - void function
 *
 * Description: 'Prints all letters'
 *
 * Return: ALways void(Success)
 */

void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
