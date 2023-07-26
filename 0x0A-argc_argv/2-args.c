#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all args
 * @argc: arg count
 * @argv: arg vect
 * Return: int
 */
=======
 * main - prints al args
 * @argc: arg count
 * @argv: args
 * Return: 0
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
