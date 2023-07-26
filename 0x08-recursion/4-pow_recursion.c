#include "main.h"

/**
<<<<<<< HEAD
 * _pow_recursion - power recursion
=======
 * _pow_recursion - power
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
 * @x: int
 * @y: int
 * Return: int
 */
<<<<<<< HEAD
=======

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
