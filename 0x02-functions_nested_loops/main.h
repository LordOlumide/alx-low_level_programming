#include <stdio.h>
#ifndef main.h
#define main.h

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
		putchar(n);
		n++;
	}
	putchar('\n');
}

#endif
