#include "main.h"

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: string to check
 *
 * Return: 1(true) or 0(false)
 */

int is_palindrome(char *s)
{
	char *p = s;
	int len = _str_len_2(p);

	return (check_2(s, 0, len - 1));
}

/**
 * check_2 - checks if its a palindrome
 * @d: string to check
 * @start: starts at 0
 * @end: string length
 * Return: 1(isPalindrome) or 0(isNOtPalindrom)
 */

int check_2(char *d, int start, int end)
{
	if (start == (end / 2) + 1)
		return (1);
	else if (d[start] == d[end - start])
		return (1 * check_2(d, start + 1, end));
	else
		return (0);
}

/**
 * _str_len_2 - gets the lenght of the string
 * @p: String to check
 * Return: int
 */

int _str_len_2(char *p)
{
	if (*p != '\0')
		return (1 + _str_len_2(p + 1));
	return (0);
}
