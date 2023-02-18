#include <stdio.h>

/**
 * main - print comb5
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; j < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			for (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar(jj % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
