#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Prints the alphabets'
 *
 * Return: Always 0(Success)
*/

void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
}
