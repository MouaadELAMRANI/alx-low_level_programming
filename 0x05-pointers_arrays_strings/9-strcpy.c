#include "main.h"

/**
 * _strcpy - copy string
 * @dest: char
 * @src: char
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\n'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
