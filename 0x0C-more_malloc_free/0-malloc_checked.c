#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
=======

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
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
}
