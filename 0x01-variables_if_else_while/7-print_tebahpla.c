#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Reverse alphabets'
 *
 * Return: 0(Success)
 */

int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
