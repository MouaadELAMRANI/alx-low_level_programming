#include "stdio.h"

/**
 * main: prints number of args
 * @argc: arg count
 * @argv: arg vector
 * Return: int
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
