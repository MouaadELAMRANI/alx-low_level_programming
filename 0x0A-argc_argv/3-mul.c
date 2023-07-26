#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply
 * @argc: arg count
<<<<<<< HEAD
 * @argv: arg vect
 * Return: int
 */
=======
 * @argv: args
 * Return: 0
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
