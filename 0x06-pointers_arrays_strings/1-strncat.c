#include "main.h"

/**
 * _strncat - concats two strings
 * @dest: first string
 * @src: second string
 * @n: max size of src used
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len, sum_len, i;

	dest_len = 0;
	src_len = 0;
	sum_len = 0;

	while (1)
	{
		if (dest[dest_len] == '\0')
			break;
		dest_len++;
	}
	while (1)
	{
		if (src[src_len] == '\0')
			break;
		src_len++;
	}

	sum_len = dest_len + src_len;
	for (i = 0; i < src_len && i < n; i++)
		dest[dest_len + i] = src[i];
	dest[sum_len + 1] = '\n';

	return (dest);
}
