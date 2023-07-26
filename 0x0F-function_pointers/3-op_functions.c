<<<<<<< HEAD
/**
 * op_add - add
 * @a: int
 * @b: int
 * Return: addition
 */
=======
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add
  * @a: a
  * @b: b
  * Return: int
  */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int op_add(int a, int b)
{
	return (a + b);
}

/**
<<<<<<< HEAD
 * op_sub - sub
 * @a: int
 * @b: int
 * Return: diff
 */
=======
  * op_sub - sub
  * @a: a
  * @b: b
  * Return: int
  */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int op_sub(int a, int b)
{
	return (a - b);
}

/**
<<<<<<< HEAD
 * op_mul - multi
 * @a: int
 * @b: int
 * Return: multiplication
 */
=======
  * op_mul - mul
  * @a: a
  * @b: b
  * Return: int
  */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int op_mul(int a, int b)
{
	return (a * b);
}

/**
<<<<<<< HEAD
 * op_div - div
 * @a: int
 * @b: int
 * Return: division
 */
int op_div(int a, int b)
{
=======
  * op_div - div
  * @a: a
  * @b: b
  * Return: int
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
	return (a / b);
}

/**
<<<<<<< HEAD
 * op_mod - mod
 * @a: int
 * @b: int
 * Return: mod
 */
int op_mod(int a, int b)
{
=======
  * op_mod - mod
  * @a: a
  * @b: b
  * Return: int
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
	return (a % b);
}
