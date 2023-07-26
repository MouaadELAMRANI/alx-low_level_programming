<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array
 * @min: int
 * @max: int
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;
=======
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e

	if (min > max)
		return (NULL);

<<<<<<< HEAD
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}

	return (a);
=======
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
}
