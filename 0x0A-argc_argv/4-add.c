#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - adds
 * @argc: arg count
 * @argv: arg vect
 * Return: int
 */
=======
 * main - adds pos numbers
 * @argc: arg count
 * @argv: args
 * Return: 0
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
