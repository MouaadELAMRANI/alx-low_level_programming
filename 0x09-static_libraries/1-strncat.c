#include "main.h"
<<<<<<< HEAD
char *_strncat(char *dest, char *src, int n)
{}
=======

/**
 * _strncat - concat
 * @src: char
 * @dest: char
 * @n: int
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
