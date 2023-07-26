#include "main.h"
<<<<<<< HEAD
char *_strcat(char *dest, char *src)
{}
=======

/**
 * _strcat - concat
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
