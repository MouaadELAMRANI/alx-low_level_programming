<<<<<<< HEAD
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to func
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
=======
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name
 * @f: function
 * Rteurn: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
}
