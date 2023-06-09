#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints change
 * @argc: arg count
 * @argv: arg vects
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {2, 5, 10, 25};

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
		{
			count++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
