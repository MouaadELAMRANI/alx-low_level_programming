#include "main.h"

/**
 * _strlen - length of string
 * @s: char
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
