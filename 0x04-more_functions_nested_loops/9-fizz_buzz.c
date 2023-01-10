#include <stdio.h>


/**
 * main - prints Fizz Buzz
 *
 * Return: 0 always
 */

int main(void)
{
	int n;


	for (n = 1; n < 101; n++)
	{
		if ((n % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", n);
		}

	}
}
