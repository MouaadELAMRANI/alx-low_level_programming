#include "main.h"

/**
 * malloc_checked - cause normal process termination
 * @b: allocated mem
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
