#include <stdio.h>

/**
 * main - Entry point
 * Description: FizzBuzz
 * Return: 0(Success)
 */

int main(void)
{
	int min, max;

	max = 100;

	for (min = 1; min <= 100; min++)
	{
		if ((min % 3 == 0) && (min % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (min % 3 == 0)
		{
			printf("Fizz");
		}
		else if (min % 5 == 0)
		{
			printf("Buzz");
		}
		else
			_putchar( min + '0');

		_putchar(32);
	}
	_putchar(10);

	return (0);
}
