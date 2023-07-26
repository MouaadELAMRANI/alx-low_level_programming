<<<<<<< HEAD
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - find int
 * @array: pointer to int
 * @size: array size
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
=======
#include "function_pointers.h"

/**
  * int_index - function
  * @array: array
  * @size: size
  * @cmp: pointer
  * Return: ...
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
		}
	}

	return (-1);
}
