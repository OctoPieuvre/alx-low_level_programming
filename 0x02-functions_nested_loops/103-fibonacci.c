#include <stdio.h>


/**
 * main - Fibonacci
 *
 * Return: 0 Always
 */

int main(void)
{
	long int fib1, fib2, sum;

	fib1 = 1;
	fib2 = 2;
	sum = 0;

	while (sum <= 4000000)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		printf(", ");
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
