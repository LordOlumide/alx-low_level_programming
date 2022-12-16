#include <stdio.h>

/**
 * main - Entry point
 * Description: 'get the larget prime factor'
 * Return: 0(Success)
 */

int main(void)
{
	long int num, div, maxFact;

	num = 612852475143;

	div = 2;

	while (num != 0)
	{
		if (num % div != 0)
		{
			div++;
		}
		else
		{
			maxFact = num;
			num = num / div;
			if (num == 1)
			{
				printf("%lu", maxFact);
				break;
			}
		}
	}
	putchar(10);

	return (0);
}
