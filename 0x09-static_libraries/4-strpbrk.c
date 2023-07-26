#include "main.h"
<<<<<<< HEAD
char *_strpbrk(char *s, char *accept)
{}
=======

/**
 * _strpbrk - search
 * @s: char
 * @accept: char
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
