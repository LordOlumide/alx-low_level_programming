#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: address to copy to
 * @src: address to copy from
 * @n: no. of bytes to copy
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		*(dest + num) = *(src + num);
	}

	return (dest);
}
