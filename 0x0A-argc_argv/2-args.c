#include <stdio.h>

/**
 * main - prints all args
 * @argc: arg count
 * @argv: arg vect
 * Return: args
 */
char main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
