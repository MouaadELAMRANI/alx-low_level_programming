#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concat two strings
 * @s1: string
 * @s2: string
 * Return: pointer
 */
=======

/**
 * str_concat - concat
 * @s1: char
 * @s2: char
 * Return: pointer
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		result[i] = s2[j];
	result[len] = '\0';

	return (result);
}
