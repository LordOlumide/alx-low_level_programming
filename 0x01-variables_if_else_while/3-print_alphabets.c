#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Printing alphabets'
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 97;
	int z = 122;
	int N = 65;
	int Z = 90;

	while (n <= z)
	{
		putchar(n);
		n++;
	}
	while (N <= Z)
	{
		putchar(N);
		N++;
	}
	putchar('\n');

	return (0);
}
