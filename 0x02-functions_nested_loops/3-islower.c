#include "main.h"

/**
 * _islower - check lower case
 * @c: char to check
 *
 * Description: 'Checks for lower case'
 *
 * Return: Always 0 or 1 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
}
