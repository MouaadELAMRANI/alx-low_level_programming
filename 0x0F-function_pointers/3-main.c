<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - print op
 * @argc: n args
 * @argv: v args
 * Return: int
 */
int main(int argc, char *argv[])
{
=======
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - main
  * @argc: argc
  * @argv: argv
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

<<<<<<< HEAD
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

=======
	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
	return (0);
}
