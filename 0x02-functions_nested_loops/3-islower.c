#include "main.h"

/**
 * _islower - is lowercase ?
 * Return: 1 for lowercase, 0 else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
