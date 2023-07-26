#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - prints change
 * @argc: arg count
 * @argv: arg vects
 * Return: 0
 */
=======
 * main - print min
 * @argc: arg count
 * @argv: args
 * Return: 0
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
<<<<<<< HEAD
		{
			count++;
		}
=======
			count++;
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
