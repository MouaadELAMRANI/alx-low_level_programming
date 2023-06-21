#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints int
 * @array: pointer to int
 * @action: pointer to func
 * @size: pointer to size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
