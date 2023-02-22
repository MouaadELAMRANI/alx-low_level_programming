#include <stdio.h>

/**
 * main - prints fibonacci
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib11, fib12, fib21, fib22;
	unsigned long f1, f2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib11 = fib1 / 10000000000;
	fib21 = fib2 / 10000000000;
	fib12 = fib1 % 10000000000;
	fib22 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		f1 = fib11 + fib21;
		f2 = fib12 + fib22;
		if (fib12 + fib22 > 9999999999)
		{
			f1 += 1;
			f2 %= 10000000000;
		}

		printf("%lu%lu", f1, f2);
		if (count != 98)
			printf(", ");

		fib11 = fib21;
		fib12 = fib22;
		fib21 = f1;
		fib22 = f2;
	}
	printf("\n");

	return (0);
}
