#include "3-calc.h"
<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - get opp func
 * @s: pointer
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
=======
#include <stdlib.h>
#include <string.h>

/**
  * *get_op_func - function
  * @s: operator
  * Return: 0
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
}
