#include "main.h"
<<<<<<< HEAD
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return void
=======

/**
 * _print_rev_recursion - print
 * @s: char
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
