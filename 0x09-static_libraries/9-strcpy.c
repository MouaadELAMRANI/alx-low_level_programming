#include "main.h"
<<<<<<< HEAD
char *_strcpy(char *dest, char *src)
{}
=======

/**
 * _strcpy - copy string
 * @dest: char
 * @src: char
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
