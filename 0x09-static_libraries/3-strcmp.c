#include "main.h"
<<<<<<< HEAD
int _strcmp(char *s1, char *s2)
{}
=======

/**
 * _strcmp - compare
 * @s1: char
 * @s2: char
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
