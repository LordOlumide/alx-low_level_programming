#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the string s in accept
 * @s: string to search
 * @accept: String to find
 *
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				return (s + i);
		}
	}
	return ('\0');
}
