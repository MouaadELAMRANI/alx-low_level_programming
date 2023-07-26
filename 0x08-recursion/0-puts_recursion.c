#include "main.h"
<<<<<<< HEAD
/**
 * _puts_recursion - prints string
 * @s: string
 * Return: void
=======

/**
 * _puts_recursion - print
 * @s: string
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
