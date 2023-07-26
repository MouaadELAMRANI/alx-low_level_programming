#include "main.h"

/**
<<<<<<< HEAD
 * check - checks if prime
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
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
<<<<<<< HEAD
 * is_prime_number - check if prime
 * @n: int
 * Return: int
 */
=======
 * is_prime_number - prime
 * @n: int
 * Return: int
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
