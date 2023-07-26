#include "main.h"
<<<<<<< HEAD
void _puts(char *s)
{}
=======

/**
 * _puts - prints
 * @str: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
