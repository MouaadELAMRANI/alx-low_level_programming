#include "main.h"
<<<<<<< HEAD
char *_strstr(char *haystack, char *needle)
{}
=======

/**
 * _strstr - locate
 * @haystack: char
 * @needle: char
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
