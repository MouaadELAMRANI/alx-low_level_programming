#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e

/**
 * create_array - create array
 * @size: int
<<<<<<< HEAD
 * @c: init value
 * Return: pointer
 */
=======
 * @c: char
 * Return: pointer
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
