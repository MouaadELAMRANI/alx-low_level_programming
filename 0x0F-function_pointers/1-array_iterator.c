<<<<<<< HEAD
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints int
 * @array: pointer to int
 * @action: pointer to func
 * @size: pointer to size
 */
=======
#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: pointer
 * Return: void
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

<<<<<<< HEAD
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
=======
	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
	}
}
