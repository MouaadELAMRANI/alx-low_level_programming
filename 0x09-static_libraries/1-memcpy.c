#include "main.h"
<<<<<<< HEAD
char *_memcpy(char *dest, char *src, unsigned int n)
{}
=======

/**
 * _memcpy - copy from mem to mem
 * @n: unsigned int
 * @dest: char
 * @src: char
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
