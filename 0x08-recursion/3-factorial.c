#include "main.h"

/**
 * factorial - factorial
 * @n: int
 * Return: int
 */
<<<<<<< HEAD
=======

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
