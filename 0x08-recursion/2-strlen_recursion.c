#include "main.h"
<<<<<<< HEAD
/**
 * _strlen_recursion - length of string
 * @s: string
=======

/**
 * _strlen_recursion - len
 * @s: char
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
