#include "main.h"

/**
 * check - checks sqrt
 * @a: int
 * @b: int
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - return sqrt
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
