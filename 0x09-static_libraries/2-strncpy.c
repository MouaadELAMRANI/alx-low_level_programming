#include "main.h"
<<<<<<< HEAD
char *_strncpy(char *dest, char *src, int n)
{}
=======

/**
 * _strncpy - copy
 * @src: char
 * @dest: char
 * @n: int
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
