#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Hexadecimal'
 *
 * Return: 0(Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (n = 97; n <= 101; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
