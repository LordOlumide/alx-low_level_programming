#include "main.h"

/**
 * _strspn - checks length of initial condition acceptable str
 * @s: string to check
 * @accept: condition to fit
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, a, b, ch;

	len = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		ch = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				ch = 1;
		}
		if (ch == 1)
			len++;
		else
			break;
	}
	return (len);
}

