#include "main.h"
<<<<<<< HEAD
unsigned int _strspn(char *s, char *accept)
{}
=======

/**
 * _strspn - length
 * @s:char
 * @accept: char
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
	return (z);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
