#include "main.h"

/**
<<<<<<< HEAD
 * check - checks sqrt
=======
 * check - check
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
 * @a: int
 * @b: int
 * Return: int
 */
<<<<<<< HEAD
=======

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int check(int a, int b)
{
	if (a * a == b)
		return (a);
<<<<<<< HEAD
	else if (a * a > b)
=======
	if (a * a > b)
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
		return (-1);
	return (check(a + 1, b));
}

/**
<<<<<<< HEAD
 * _sqrt_recursion - return sqrt
 * @n: int
 * Return: int
 */
=======
 * _sqrt_recursion - natural srt
 * @n: int
 * Return: int
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
