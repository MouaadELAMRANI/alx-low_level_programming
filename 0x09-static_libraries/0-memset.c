#include "main.h"

/**
 * _memset - fills memory
 * @n: number of bytes
 * @s: fill value
 * @b: pointer
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
