#include "main.h"
<<<<<<< HEAD
char *_strchr(char *s, char c)
{}
=======

/**
 * _strchr- locate
 * @c: char
 * @s: char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
