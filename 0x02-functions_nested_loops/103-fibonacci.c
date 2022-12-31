#include <stdio.h>


/**
 * main - Fibonacci
 *
 * Return: 0 Always
 */

int main(void)
{
	long int fib1, fib2, sum, afn;

	fib1 = 0;
	fib2 = 1;
	afn = sum = 0;

	while (sum <= 4000000)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if ((fib1 % 2) == 0)
		{
			afn = afn + fib1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
