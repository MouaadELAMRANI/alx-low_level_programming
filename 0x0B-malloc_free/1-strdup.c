#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * _strdup - return pointer
 * @str: string
 * Return: pointer
 */
=======

/**
 * _strdup - pointer
 * @str: char
 * Return: pointer
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
<<<<<<< HEAD

=======
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
