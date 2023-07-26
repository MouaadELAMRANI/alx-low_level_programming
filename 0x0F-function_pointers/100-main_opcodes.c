#include <stdlib.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_opcodes - print opcodes
 * @a: adress
 * @n: number
 */
=======
 * print_opcodes - print
 * @a: address
 * @n: number
 * Return: void
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
<<<<<<< HEAD
}

/**
 * main - main
 * @argc: n arg
 * @argv: v arg
 * Return: 0
 */
=======

}

/**
 * main - prints
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: always O
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
