#include <stdio.h>

/**
 * main - Entry point
 * Description: "The program prints first 50 fibonnaci nums"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, i;
	int a = 1;
	int b = 2;

	printf("%d, %d", a, b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}

	return (0);
}
