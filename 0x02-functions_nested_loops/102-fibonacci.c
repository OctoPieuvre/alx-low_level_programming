#include <stdio.h>

/**
 * main - fibonacci
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1;
	unsigned long sum;
	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf(%lu, sum);
		fib1 = fib2;
		fib2 = sum;
		if (i == 49)
		{
			printf(n);
		}
		else
		{
			printf(, );
		}
	}
	return (0);
}
