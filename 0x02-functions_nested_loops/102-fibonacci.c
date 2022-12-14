#include <stdio.h>

/**
 * main - Entry point
 * Description: "The program prints first 50 fibonnaci nums"
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	putchar('\n');

	return (0);
}
